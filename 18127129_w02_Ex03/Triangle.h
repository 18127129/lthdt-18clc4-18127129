#include "Point.h"
class Triangle
{
	Point a;
	Point b;
	Point c;
public:
	Point A();
	Point B();
	Point C();
	void setA(float x, float y);
	void setB(float x, float y);
	void setC(float x, float y);
public:
	Triangle();
	Triangle(Point x, Point y, Point z);
	Triangle(const Triangle &x);
	~Triangle();
};

