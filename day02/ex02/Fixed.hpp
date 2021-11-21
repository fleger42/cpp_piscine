#ifndef FIXED
#define FIXED
#include <iostream>
#include <ostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const & copy);
		Fixed(const int n);
		Fixed(const float n);
		~Fixed(void);
		Fixed & operator=(Fixed const &to_equal);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		inline bool operator==(const Fixed & to_cmp) const { return ((this->toFloat() - to_cmp.toFloat()) == 0); }
		inline bool operator!=(const Fixed & to_cmp) const { return ((this->toFloat() - to_cmp.toFloat()) != 0); }
		inline bool operator<(const Fixed & to_cmp) const { return ((this->toFloat() - to_cmp.toFloat()) < 0); }
		inline bool operator>(const Fixed & to_cmp) const { return ((this->toFloat() - to_cmp.toFloat()) > 0); }
		inline bool operator<=(const Fixed & to_cmp) const { return ((this->toFloat() - to_cmp.toFloat()) <= 0); }
		inline bool operator>=(const Fixed & to_cmp) const { return ((this->toFloat() - to_cmp.toFloat()) >= 0); }
		Fixed operator+(const Fixed & to_add) const { return (Fixed(this->toFloat() + to_add.toFloat())); }
		Fixed operator-(const Fixed & to_sub) const { return (Fixed(this->toFloat() - to_sub.toFloat())); }
		Fixed operator*(const Fixed & to_mult) const { return (Fixed(this->toFloat() * to_mult.toFloat())); }
		Fixed operator/(const Fixed & to_divide) const
		{ 
			if(to_divide.toFloat() == 0)
				return (Fixed(this->toFloat()));
			return (Fixed(this->toFloat() / to_divide.toFloat()));
	       	}
		static Fixed & min(Fixed & first, Fixed & second)
		{
			if(first < second)
				return (first);
			return (second);
		}
		static Fixed & max(Fixed & first, Fixed & second)
		{
			if(first > second)
				return (first);
			return (second);
		}
		static const Fixed & min(Fixed const & first, Fixed const & second)
		{
			if(first < second)
				return (first);
			return (second);
		}
		static const Fixed & max(Fixed const & first, Fixed const & second)
		{
			if(first > second)
				return (first);
			return (second);
		}
		Fixed &operator++()
		{ 
			this->fixed_value = this->fixed_value + 1 ;
			return (*this);
		}
		Fixed operator++(int)
		{ 
			Fixed old = *this;
			operator++();
			return (old);
		}
		Fixed &operator--()
		{ 
			this->fixed_value = this->fixed_value - 1;
			return (*this);
		}
		Fixed operator--(int)
		{ 
			Fixed old = *this;
			operator--();
			return (old);
		}
	private:
		int fixed_value;
		const static int fractionnal_nbr = 8;
};

std::ostream & operator<<(std::ostream &o, Fixed const &nbr);
#endif
