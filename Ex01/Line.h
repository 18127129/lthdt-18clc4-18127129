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
public:
	Line();
	Line(Point a, Point b);
	~Line();
};