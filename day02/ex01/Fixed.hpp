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
	private:
		int fixed_value;
		const static int fractionnal_nbr = 8;
};

std::ostream & operator<<(std::ostream &o, Fixed const &nbr);
