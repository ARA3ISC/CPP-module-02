/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:39:11 by maneddam          #+#    #+#             */
/*   Updated: 2023/09/18 15:36:26 by maneddam         ###   ########.fr       */
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
	return this->raw;
}
void Fixed::setRawBits( int const _raw )
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->raw = _raw;
}

Fixed::Fixed(const int _raw)
{
	this->raw = _raw << this->fbitsnum;
}

Fixed::Fixed(const float _raw)
{
	this->raw = _raw;
}
