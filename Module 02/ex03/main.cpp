#include "Fixed.hpp"
#include "Point.hpp"
#include "iostream"

bool bsp( Point const a, Point const b, Point const c, Point const point);
int main( void )
{
	Point const a(0.0f, 0.0f);
	Point const b(5.0f, 0.0f);
	Point const c(0.0f, 5.0f);
	Point const p(1.0f, 0.1f);

	Point const a2(0.0f, 0.0f);
	Point const b2(5.0f, 0.0f);
	Point const c2(0.0f, 5.0f);
	Point const p2(1.0f, 0.0f);

	Point helper;
	if (bsp(a,b,c,p))
		std::cout << "Point is inside of the triangle\n";
	else
		std::cout << "Point is outside of the triangle\n";
	if (bsp(a2,b2,c2,p2))
		std::cout << "Point is inside of the triangle\n";
	else
		std::cout << "Point is outside of the triangle\n";
}