#include "Point.hpp"

float area(Point const a, Point const b, Point const c)
{
	float result = (a.get_floatx() * (b.get_floaty() - c.get_floaty())
		+ b.get_floatx() * (c.get_floaty() - a.get_floaty())
		+ c.get_floatx() * (a.get_floaty() - b.get_floaty())) / 2.0f;
	return (result < 0) ? -result : result;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed BigTriangle = area(a,b, c);
	Fixed area1 = area(point, a, b);
	Fixed area2 = area(point, b, c);
	Fixed area3 = area(point, c, a);

	if (area1 == Fixed(0) || area2 == Fixed(0) || area3 == Fixed(0))
		return (false);
	return BigTriangle == area1 + area2 + area3;
}
