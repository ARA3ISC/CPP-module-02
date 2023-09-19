#ifndef FIXED_HPP
#define FIZED_HPP

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


	Fixed operator+(const Fixed& rhs);
	Fixed operator-(const Fixed& rhs);
	Fixed operator*(const Fixed& rhs) const;
	Fixed operator/(const Fixed& rhs);

	Fixed operator++();
	Fixed operator++(int);
	Fixed operator--();
	Fixed operator--(int);

	bool operator>(const Fixed& rhs);
	bool operator>=(const Fixed& rhs);
	bool operator<(const Fixed& rhs);
	bool operator<=(const Fixed& rhs);
	bool operator==(const Fixed& rhs);
	bool operator!=(const Fixed& rhs);

};

std::ostream& operator<<(std::ostream& _cout, const Fixed& myObj);

#endif
