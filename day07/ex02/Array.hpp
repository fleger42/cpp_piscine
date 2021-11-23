#include <iostream>
#include <exception>
template <typename T>
class Array
{
	public:
		class OutOfBound : public std::exception
		{
			const char *what() const throw()
			{
				return("Out of bound exception !");
			}
		};
		typedef Array<T> array_type;
		Array() : _size(0), _container(NULL) {};
		Array(unsigned int n) : _size(n), _container(new T[n]) {};
		Array(array_type const & to_copy)
		{
			_size = to_copy._size;
			_container = new T[to_copy._size];
			for(unsigned int i = 0; i < _size; i++)
				_container[i] = to_copy._container[i];
		}
		~Array()
		{
			if(_container)
				delete [] _container;
			_size = 0;
		}
		array_type & operator=(array_type const & to_copy)
		{
			_size = to_copy._size;
			if(_container)
				delete [] _container;
			_container = new T[to_copy._size];
			for(unsigned int i = 0; i < _size; i++)
				_container[i] = to_copy._container[i];
			return (*this);
		}
		T & operator[](int nbr)
		{
			if(nbr < 0 || static_cast<unsigned int>(nbr) >= _size)
				throw OutOfBound();
			return(_container[nbr]);
		}
		int size()
		{
			return(_size);
		}
	private:
		unsigned int _size;
		T *_container;
};