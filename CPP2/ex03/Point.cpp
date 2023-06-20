#include "Point.hpp"

Point::Point(void) : x(0), y(0){}
Point::Point(const float p_x, const float p_y) : x(p_x), y(p_y){}
Point::~Point(void){}
Point::Point(const Point &point) {*this = point;}
Fixed Point::getX(void) const{ return this->x;}
Fixed Point::getY(void) const{ return this->y;}

Point& Point::operator=(const Point &point){
	if (this != &point){
		const_cast <Fixed &> (this->x) = point.getX();
		const_cast <Fixed &> (this->y) = point.getY();
	}
	return *this;
}