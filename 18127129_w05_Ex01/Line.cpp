#include "Line.h"
string Line::ToString()
{
	stringstream writer;
	writer << "start = " << _start.ToString() << ", " << "end = " << _end.ToString();
	return writer.str();
}
Line* Line::Parse(string line)
{
	vector<string> v = Tokenizer::Parse(line, "), ");
	v[0] = v[0] + ")";
	_start.Parse(v[0]);
	_end.Parse(v[1]);
	return this;
}
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
Line::Line(float x, float y, float z, float t)
{
	_start.setX(x);
	_start.setY(y);
	_end.setX(z);
	_end.setY(t);
}
Line::~Line()
{ }