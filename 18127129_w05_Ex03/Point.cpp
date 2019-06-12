#include "Point.h"
void Point::display()
{
	cout << "(" << x << ", " << y << ")" << endl;
}
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
string Point::ToString()
{
	stringstream writer;
	writer << "(" << x << "," << y << ")";
	return writer.str();
}
Point* Point::Parse(string line)
{
	vector<string> v = Tokenizer::Parse(line, ", ");
	v[0] = v[0].substr(1);
	x = stof(v[0]);
	v[1] = v[1].substr(0, v[1].length() - 1);
	y = stof(v[1]);
	return this;
}
Point::Point()
{
	x = 0;
	y = 0;
}
Point::Point(float a)
{
	x = a;
	y = a;
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
