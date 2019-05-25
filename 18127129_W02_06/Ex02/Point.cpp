#include "Point.h"
float Point::X()
{
	return x;
}
float Point::Y()
{
	return y;
}
void Point::setX(float a)
{
	x = a;
}
void Point::setY(float a)
{
	y = a;
}
Point::Point()
{
	x = 0;
	y = 0;
}
Point::Point(float a, float b)
{
	x = a;
	y = b;
}
Point::Point(const Point &a)
{
	x = a.x;
	y = a.y;
}
Point::~Point()
{
}
