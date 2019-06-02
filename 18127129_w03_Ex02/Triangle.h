#include "Point.h"
using namespace std;
class Triangle
{
private:
	Point *a;
	Point *b;
	Point *c;
public:
	Point getA();
	Point getB();
	Point getC();
	void setA();
	void setB();
	void setC();
	void display();
	float Perimiter();
	float Area();
	Triangle();
	Triangle(Point &x, Point &y, Point &z);
	Triangle(float x, float y, float z, float t, float v, float u);
	Triangle(const Triangle& x);
	~Triangle();
};

