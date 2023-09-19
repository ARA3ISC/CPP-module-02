/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:03:56 by maneddam          #+#    #+#             */
/*   Updated: 2023/09/19 12:36:27 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0){}

Point::Point(const float _x, const float _y) : x(_x), y(_y) {}

Point::~Point() {}

const Fixed& Point::get_x()
{
	return this->x;
}

const Fixed& Point::get_y()
{
	return this->y;
}
