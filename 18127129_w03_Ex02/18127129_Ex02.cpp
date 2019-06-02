#include "Triangle.h"
int main()
{
	Point x(1, 2), y(3, 3), z(2, 0);
	Triangle p1, p2(x, y, z), p3(3, 5, 5, 3, 0, 0), p4(p1);
	cout << "Triangle 1:" << endl;
	p1.display();
	cout << "Perimiter = " << p1.Perimiter() << endl;
	cout << "Area = " << p1.Area() << endl;
	cout << "Triangle 2:" << endl;
	p2.display();
	cout << "Perimiter = " << p2.Perimiter() << endl;
	cout << "Area = " << p2.Area() << endl;
	cout << "Triangle 3:" << endl;
	p3.display();
	cout << "Perimiter = " << p3.Perimiter() << endl;
	cout << "Area = " << p3.Area() << endl;
	cout << "Triangle 4:" << endl;
	p4.display();
	cout << "Perimiter = " << p4.Perimiter() << endl;
	cout << "Area = " << p4.Area() << endl;
	cout << "get triangle 3: " << endl;
	cout << "A(" << p3.getA().X() << ", " << p3.getA().Y() << ")" << endl;
	cout << "B(" << p3.getB().X() << ", " << p3.getB().Y() << ")" << endl;
	cout << "C(" << p3.getC().X() << ", " << p3.getC().Y() << ")" << endl;
	cout << "set triangle 3: " << endl;
	p3.setA();
	p3.setB();
	p3.setC();
	cout << "result: " << endl;
	p3.display();
	system("pause");
}