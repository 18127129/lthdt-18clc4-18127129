#include "Line.h"
Line::Line()
{
	this->_start.setX(0);
	this->_start.setY(0);
	this->_end.setX(1);
	this->_end.setY(1);
}
Line::Line(Point a, Point b)
{
	this->_start = a;
	this->_end = b;
}
Line::~Line()
{ }