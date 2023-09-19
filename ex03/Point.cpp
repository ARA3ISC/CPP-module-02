/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:03:56 by maneddam          #+#    #+#             */
/*   Updated: 2023/09/19 15:24:39 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
	// std::cout << "Default constructor called\n";
}

Point::Point(const float _x, const float _y) : x(_x), y(_y) {
	// std::cout << "parametrized constructor constructor called\n";
}


Point::Point(const Point& old) : x(old.x), y(old.y)
{
	// std::cout << "Copy constructor called\n";
}

Point& Point::operator=(const Point& old)
{
	(void)old;
	// std::cout << "Copy assignment operator called\n";
	return *this;
}

Point::~Point() {
	// std::cout << "Destructor constructor called\n";
}

const Fixed& Point::get_x() const
{
	return this->x;
}

const Fixed& Point::get_y() const
{
	return this->y;
}
