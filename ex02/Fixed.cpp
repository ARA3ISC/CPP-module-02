/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:24:23 by maneddam          #+#    #+#             */
/*   Updated: 2023/09/18 22:12:18 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed():raw(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& old)
{
	this->raw = old.raw;
	// std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& old)
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

void Fixed::setRawBits( int const _raw )
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

float Fixed::toFloat( void ) const
{
	return ((float)this->raw / 256);
}

int Fixed::toInt( void ) const
{
	return (this->raw / 256);
}

std::ostream& operator<<(std::ostream& output, const Fixed& myObj)
{
	output << myObj.toFloat();
	return output;
}

// ex02

Fixed Fixed::operator+(const Fixed& rhs)
{
	this->raw = this->raw + rhs.raw;
	return *this;
}

Fixed Fixed::operator-(const Fixed& rhs)
{
	this->raw = this->raw - rhs.raw;
	return *this;
}

// Fixed Fixed::operator*(const Fixed& rhs)
// {
// 	// Fixed tmp;

// 	// tmp.raw = this->raw * rhs.raw;
// 	std::cout << this->raw << " * " << rhs.raw << std::endl;
// 	// this->raw = this->raw * rhs.raw;
// 	return Fixed(raw * rhs.raw);
// }

Fixed Fixed::operator/(const Fixed& rhs)
{
	this->raw = this->raw / rhs.raw;
	return *this;
}
