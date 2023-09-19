#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

class Point
{
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point();
		Point(const float _x, const float _y);
		Point(const Point& old);
		Point& operator=(const Point& old);
		~Point();

		const Fixed& get_x() const;
		const Fixed& get_y() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif
