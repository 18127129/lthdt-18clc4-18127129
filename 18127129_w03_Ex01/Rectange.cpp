#include "Rectangle.h"
void Rectangle::display()
{
	cout << "top leftsss = ";
	topLeft->display();
	cout << "bottom right = ";
	bottomRight->display();
}
Point Rectangle::TopLeft()
{
	return *topLeft;
}
Point Rectangle::BottomRight()
{
	return *bottomRight;
}
void Rectangle::setTopLeft()
{
	delete topLeft;
	topLeft = new Point;
	float y;
	cin >> y;
	topLeft->setX(y);
	cin >> y;
	topLeft->setY(y);
}
void Rectangle::setBottomRight()
{
	delete bottomRight;
	bottomRight = new Point;
	float y;
	cin >> y;
	bottomRight->setX(y);
	cin >> y;
	bottomRight->setY(y);
}
float Rectangle::Perimiter()
{
	return (abs(topLeft->X() - bottomRight->X()) + abs(topLeft->Y() - bottomRight->Y())) * 2;
}
float Rectangle::Area()
{
	return  abs(topLeft->X() - bottomRight->X()) * abs(topLeft->Y() - bottomRight->Y());
}
Rectangle::Rectangle()
{
	topLeft = new Point(1, 1);
	bottomRight = new Point(10, 10);
}
Rectangle::Rectangle(Point &x, Point &y)
{
	topLeft = new Point(x);
	bottomRight = new Point(y);
}
Rectangle::Rectangle(const Rectangle &x)
{
	topLeft = new Point(*x.topLeft);
	bottomRight = new Point(*x.bottomRight);
	//*bottomRight = *x.bottomRight;
}
Rectangle::Rectangle(float x, float y, float z, float t)
{
	topLeft = new Point(x, y);
	bottomRight = new Point(z, t);
}
Rectangle::~Rectangle()
{
	delete topLeft;
	delete bottomRight;
}
