#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

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


	Fixed(const int _raw);
	Fixed(const float _raw);
	float toFloat( void ) const;
	int toInt( void ) const;

};

std::ostream& operator<<(std::ostream& _cout, const Fixed& myObj);

#endif
