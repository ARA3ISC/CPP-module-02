/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:24:23 by maneddam          #+#    #+#             */
/*   Updated: 2023/09/19 11:05:47 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : raw(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &old)
{
	this->raw = old.raw;
	// std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &old)
{
	if (this != &old)
		this->raw = old.raw;
	// std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->raw >> 8);
}

void Fixed::setRawBits(int const _raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->raw = _raw;
}

// ex01

Fixed::Fixed(const int _raw)
{
	this->raw = _raw << this->fbitsnum;
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float _raw)
{
	this->raw = roundf(_raw * 256);
	// std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
	return ((float)this->raw / 256);
}

int Fixed::toInt(void) const
{
	return (this->raw / 256);
}

std::ostream &operator<<(std::ostream &_cout, const Fixed &myObj)
{
	_cout << myObj.toFloat();
	return _cout;
}

// ex02

Fixed Fixed::operator+(const Fixed &rhs)
{
	this->raw = this->raw + rhs.raw;
	return *this;
}

Fixed Fixed::operator-(const Fixed &rhs)
{
	this->raw = this->raw - rhs.raw;
	return *this;
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
	Fixed tmp;

	tmp.raw = (this->raw * rhs.raw) / 256;
	return tmp;
}

Fixed Fixed::operator/(const Fixed &rhs)
{
	if (rhs.raw == 0.0f || rhs.raw == 0)
	{
		std::cerr << "Error: dividing by zero" << std::endl;
		return Fixed(0.0f);
	}
	this->raw = (this->raw * 256 / rhs.raw);
	return *this;
}

Fixed Fixed::operator++()
{
	this->raw++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp;

	tmp.raw = this->raw;
	this->raw++;
	return tmp;
}

Fixed Fixed::operator--()
{
	this->raw--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp;

	tmp.raw = this->raw;
	this->raw--;
	return tmp;
}

bool Fixed::operator>(const Fixed &rhs)
{
	if (this->raw > rhs.raw)
		return true;
	return false;
}

bool Fixed::operator>=(const Fixed &rhs)
{
	if (this->raw >= rhs.raw)
		return true;
	return false;
}

bool Fixed::operator<(const Fixed &rhs)
{
	if (this->raw < rhs.raw)
		return true;
	return false;
}

bool Fixed::operator<=(const Fixed &rhs)
{
	if (this->raw <= rhs.raw)
		return true;
	return false;
}

bool Fixed::operator==(const Fixed &rhs)
{
	if (this->raw == rhs.raw)
		return true;
	return false;
}

bool Fixed::operator!=(const Fixed &rhs)
{
	if (this->raw != rhs.raw)
		return true;
	return false;
}
