#include "Point.h"
class Rectangle
{
private:
	Point *topLeft;
	Point *bottomRight;
public:
	void display();
	Point TopLeft();
	Point BottomRight();
	void setTopLeft();
	void setBottomRight();
	float Perimiter();
	float Area();
public:
	Rectangle();
	Rectangle(Point &x, Point &y);
	Rectangle(const Rectangle &x);
	Rectangle(float x, float y, float z, float t);
	~Rectangle();
};

