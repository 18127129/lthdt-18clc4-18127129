#include <iostream>
using namespace std;
class Point
{
private:
	float x;
	float y;
public:
	float X()
	{
		return x;
	}
	float Y()
	{
		return y;
	}
	void setX(float a)
	{
		x = a;
	}
	void setY(float a)
	{
		y = a;
	}
public:
	Point();
	Point(float, float);
	~ Point();
};
