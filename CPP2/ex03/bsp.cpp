#include "Point.hpp"
#include "Fixed.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float x_a = a.getX().toFloat(), y_a = a.getY().toFloat();
	float x_b = b.getX().toFloat(), y_b = b.getY().toFloat();
	float x_c = c.getX().toFloat(), y_c = c.getY().toFloat();
	float x_p = point.getX().toFloat(), y_p = point.getY().toFloat();
	float alpha = ((y_b - y_c) * (x_p - x_c) + (x_c - x_b) * (y_p - y_c)) /
		((y_b - y_c) * (x_a - x_c) + (x_c - x_b) * (y_a - y_c));
	float beta = ((y_c - y_a) * (x_p - x_c) + (x_a - x_c) * (y_p - y_c)) /
		((y_b - y_c) * (x_a - x_c) + (x_c - x_b) * (y_a - y_c));
	float gamma = 1 - alpha - beta;
	if (alpha <= 0 || alpha >= 1 || beta <= 0 || beta >= 1
		|| gamma <= 0 || gamma >= 1)
		return false;
	return true;
}