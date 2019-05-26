#include "Rectangle.h"
Point Rectangle::TopLeft()
{
	return topLeft;
}
Point Rectangle::BottomRight()
{
	return bottomRight;
}
void Rectangle::setTopLeft(float x, float y)
{
	topLeft.setX(x);
	topLeft.setY(y);
}
void Rectangle::setBottomRight(float x, float y)
{
	bottomRight.setX(x);
	bottomRight.setY(y);
}
Rectangle::Rectangle()
{
	topLeft.setX(0);
	topLeft.setY(0);
	bottomRight.setX(1);
	bottomRight.setY(1);
}
Rectangle::Rectangle(Point x, Point y)
{
	topLeft = x;
	bottomRight = y;
}
Rectangle::Rectangle(const Rectangle &x)
{
	topLeft = x.topLeft;
	bottomRight = x.bottomRight;
}
Rectangle::~Rectangle()
{
}
