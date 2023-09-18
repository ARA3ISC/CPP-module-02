/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:39:11 by maneddam          #+#    #+#             */
/*   Updated: 2023/09/18 20:00:46 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():raw(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& old)
{
	this->raw = old.raw;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& old)
{
	if (this != &old)
		this->raw = old.raw;
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
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

Fixed::Fixed(const int _raw)
{
	this->raw = _raw << this->fbitsnum;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float _raw)
{
	this->raw = roundf(_raw * 256);
	std::cout << "Float constructor called" << std::endl;
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
