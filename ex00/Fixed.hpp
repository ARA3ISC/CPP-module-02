#ifndef FIXED_HPP
#define FIZED_HPP

#include <iostream>

class Fixed
{
private:
	int raw;
	static const int fbitsnum = 8;

public:
	Fixed();
	Fixed(const Fixed &old);
	Fixed &operator=(const Fixed &old);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif
