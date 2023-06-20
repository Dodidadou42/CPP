#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
	const Point a(0.452, 0.658);
	const Point b(5.785, 10.2);
	const Point c(10.789, 0.33333);
	const Point p1(15.88974, 15.16);
	const Point p2(6.9584, 7.002);
	std::cout << bsp(a, b, c, p1) << std::endl;
	std::cout << bsp(a, b, c, p2) << std::endl;
	return 0;
}