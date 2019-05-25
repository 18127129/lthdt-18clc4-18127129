#include "Point.h"
class Rectangle
{
private:
	Point topLeft;
	Point bottomRight;
public:
	Point TopLeft();
	Point BottomRight();
	void setTopLeft(float x, float y);
	void setBottomRight(float x, float y);
public:
	Rectangle();
	Rectangle(Point x, Point y);
	Rectangle(const Rectangle &x);
	~Rectangle();
};

