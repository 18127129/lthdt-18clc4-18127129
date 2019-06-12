#include "Tokenizer.h"
#include <sstream>
using namespace std;
class Point
{
private:
	float x;
	float y;
public:
	void display();
	float X();
	float Y();
	void setX(float a);
	void setY(float a);
	string ToString();
	Point* Parse(string line);
public:

	Point();
	Point(float, float);
	Point(float);
	Point(const Point &a);
	~Point();
};
