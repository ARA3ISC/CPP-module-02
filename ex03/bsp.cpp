/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:43:48 by maneddam          #+#    #+#             */
/*   Updated: 2023/09/19 16:13:46 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*
Area of triangle:
A = 1/2 * |x1*y2 + x2y3 + x3y1 - x1y3 - x2y1 - x3y2|

*/

float getAreaSize(Point const a, Point const b, Point const c)
{

	int x1 = a.get_x().getRawBits();
	int y1 = a.get_y().getRawBits();

	int x2 = b.get_x().getRawBits();
	int y2 = b.get_y().getRawBits();

	int x3 = c.get_x().getRawBits();
	int y3 = c.get_y().getRawBits();

	const float result = (x1 * y2) + (x2 * y3) + (x3 * y1) - (x1 * y3) - (x2 * y1) - (x3 * y2);

	if (result < 0)
		return (result * -1) / 2;
	return result / 2;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	const float wholeTriangleArea = getAreaSize(a, b, c);

	const float a1 = getAreaSize(a, b, point);
	const float a2 = getAreaSize(a, point, c);
	const float a3 = getAreaSize(point, b, c);


	if (wholeTriangleArea == a1 + a2 + a3)
		return true;
	return false;
}
