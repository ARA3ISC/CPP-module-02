/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:43:48 by maneddam          #+#    #+#             */
/*   Updated: 2023/09/19 16:46:07 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*
Area of triangle:
A = 1/2 * |x1*y2 + x2y3 + x3y1 - x1y3 - x2y1 - x3y2|

*/

Fixed getAreaSize(Point const a, Point const b, Point const c)
{
	Fixed x1 = a.get_x();
	Fixed y1 = a.get_y();

	Fixed x2 = b.get_x();
	Fixed y2 = b.get_y();

	Fixed x3 = c.get_x();
	Fixed y3 = c.get_y();

	Fixed result = (x1 * y2) + (x2 * y3) + (x3 * y1) - (x1 * y3) - (x2 * y1) - (x3 * y2);

	if (result < 0)
		return (result * -1) / 2;
	return result / 2;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed wholeTriangleArea = getAreaSize(a, b, c);

	Fixed a1 = getAreaSize(a, b, point);
	Fixed a2 = getAreaSize(a, point, c);
	Fixed a3 = getAreaSize(point, b, c);


	std::cout << a1 << " - " << a2 << " - " << a3 << std::endl;
	if (a1 == 0.0f || a2 == 0.0f || a3 == 0.0f)
		return false;
	if (wholeTriangleArea == a1 + a2 + a3)
		return true;
	return false;
}
