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
		~Point();

		const Fixed& get_x();
		const Fixed& get_y();
};
#endif
