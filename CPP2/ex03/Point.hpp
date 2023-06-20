#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private : 
		const Fixed x;
		const Fixed y;
	public :
		Point(void);
		Point(const float x, const float y);
		Point(const Point &point);
		~Point(void);

		Fixed getX(void) const;
		Fixed getY(void) const;

		Point& operator=(const Point &point);
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif