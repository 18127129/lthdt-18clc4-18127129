#include "Point.h"
class Line
{
private:
	Point _start;
	Point _end;
public:
	Point start()
	{
		return _start;
	}
	Point end()
	{
		return _end;
	}
	void set_start(Point a)
	{
		_start = a;
	}
	void set_end(Point a)
	{
		_end = a;
	}
	string ToString();
	Line* Parse(string);
public:
	Line();
	Line(Point a, Point b);
	Line(float x, float y, float z, float t);
	Line(const Line& x);
	~Line();
};