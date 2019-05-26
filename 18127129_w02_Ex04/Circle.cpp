#include "Circle.h"
Point Circle::Center()
{
	return center;
}
float Circle::Radius()
{
	return radius;
}
void Circle::setCenter(float a, float b)
{
	center.setX(a);
	center.setY(b);
}
void Circle::setRadius(float x)
{
	radius = x;
}

Circle::Circle()
{
	center.setX(0);
	center.setY(0);
	radius = 1;
}
Circle::Circle(Point x, float y)
{
	center = x;
	radius = y;
}
Circle::Circle(const Circle &x)
{
	center = x.center;
	radius = x.radius;
}
Circle::~Circle()
{
}
