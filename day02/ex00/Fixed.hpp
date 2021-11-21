class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const & copy);
		~Fixed(void);
		Fixed & operator=(Fixed const &to_equal);
		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int fixed_value;
		const static int fractionnal_nbr = 8;
};