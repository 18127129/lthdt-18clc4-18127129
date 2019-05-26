#include "Point.h"
class Circle
{
private:
	Point center;
	float radius;
public:
	Point Center();
	float Radius();
	void setCenter(float a, float b);
	void setRadius(float x);
public:
	Circle();
	Circle(Point, float);
	Circle(const Circle &x);
	~Circle();
};

