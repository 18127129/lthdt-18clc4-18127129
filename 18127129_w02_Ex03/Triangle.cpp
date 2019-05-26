#include "Triangle.h"
Point Triangle::A()
{
	return a;
}
Point Triangle::B()
{
	return b;
}
Point Triangle::C()
{
	return c;
}
void Triangle::setA(float x, float y)
{
	a.setX(x);
	a.setY(y);
}
void Triangle::setB(float x, float y)
{
	b.setX(x);
	b.setY(y);
}
void Triangle::setC(float x, float y)
{
	c.setX(x);
	c.setY(y);
}
Triangle::Triangle()
{
	a.setX(0);
	a.setY(0);
	b.setX(0);
	b.setY(2);
	c.setX(1);
	c.setY(1);
}
Triangle::Triangle(Point x, Point y, Point z)
{
	a = x;
	b = y;
	c = z;
}
Triangle::Triangle(const Triangle &x)
{
	a = x.a;
	b = x.b;
	c = x.c;
}
Triangle::~Triangle()
{
}