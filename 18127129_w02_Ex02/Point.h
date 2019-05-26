#include <iostream>
using namespace std;
class Point
{
private:
	float x;
	float y;
public:
	float X();
	float Y();
	void setX(float a);
	void setY(float a);

public:

	Point();
	Point(float, float);
	Point(const Point &a);
	~Point();
};

