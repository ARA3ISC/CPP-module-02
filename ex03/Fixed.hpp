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
	Fixed& operator=(const Fixed &old);
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

	static Fixed& min(Fixed& lhs, Fixed& rhs);
	static const Fixed& min(const Fixed& lhs, const Fixed& rhs);

	static Fixed& max(Fixed& lhs, Fixed& rhs);
	static const Fixed& max(const Fixed& lhs, const Fixed& rhs);

};

std::ostream& operator<<(std::ostream& _cout, const Fixed& myObj);

#endif
