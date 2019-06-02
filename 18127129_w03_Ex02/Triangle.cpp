#include "Triangle.h"
Point Triangle::getA()
{
	return *a;
}
Point Triangle::getB()
{
	return *b;
}
Point Triangle::getC()
{
	return *c;
}
void Triangle::setA()
{
	delete a;
	a = new Point;
	float y;
	cin >> y;
	a->setX(y);
	cin >> y;
	a->setY(y);
}
void Triangle::setB()
{
	delete b;
	b = new Point;
	float y;
	cin >> y;
	b->setX(y);
	cin >> y;
	b->setY(y);
}
void Triangle::setC()
{
	delete c;
	c = new Point;
	float y;
	cin >> y;
	c->setX(y);
	cin >> y;
	c->setY(y);
}
void Triangle::display()
{
	cout << "A";
	a->display();
	cout << "B";
	b->display();
	cout << "C";
	c->display();
}
float Triangle::Perimiter()
{
	float x = sqrt(pow(a->X() - b->X(), 2) + pow(a->Y() - b->Y(), 2));
	float y = sqrt(pow(a->X() - c->X(), 2) + pow(a->Y() - c->Y(), 2));
	float z = sqrt(pow(c->X() - b->X(), 2) + pow(c->Y() - b->Y(), 2));
	return x + y + z;
}
float Triangle::Area()
{
	float x = sqrt(pow(a->X() - b->X(), 2) + pow(a->Y() - b->Y(), 2));
	float y = sqrt(pow(a->X() - c->X(), 2) + pow(a->Y() - c->Y(), 2));
	float z = sqrt(pow(c->X() - b->X(), 2) + pow(c->Y() - b->Y(), 2));
	float p = (x + y + z) / 2;
	return sqrt(p * (p - x) * (p - y) * (p - z));
}
Triangle::Triangle()
{
	a = new Point(1, 1);
	b = new Point(1, 2);
	c = new Point(4, 2);
}
Triangle::Triangle(Point &x, Point &y, Point &z)
{
	a = new Point(x);
	b = new Point(y);
	c = new Point(z);
}
Triangle::Triangle(float x, float y, float z, float t, float v, float u)
{
	a = new Point(x, y);
	b = new Point(z, t);
	c = new Point(v, u);
}
Triangle::Triangle(const Triangle& x)
{
	a = new Point(*x.a);
	b = new Point(*x.b);
	c = new Point(*x.c);
}
Triangle::~Triangle()
{
	delete a;
	delete b;
	delete c;
}
