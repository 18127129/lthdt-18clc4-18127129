#include "Rectangle.h"
int main()
{
	Point x(4.1, 2.1), y(10.5, 7.1);
	Rectangle p, p2(x, y), p3(1,2,3,4), p4(p);
	cout << "Rectangle 1: " << endl;
	p.display();
	cout << "Perimiter = " << p.Perimiter() << endl;
	cout << "Area = " << p.Area() << endl;
	cout << "Rectangle 2: " << endl;
	p2.display();
	cout << "Perimiter = " << p2.Perimiter() << endl;
	cout << "Area = " << p2.Area() << endl;
	cout << "Rectangle 3: " << endl;
	p3.display();
	cout << "Perimiter = " << p3.Perimiter() << endl;
	cout << "Area = " << p3.Area() << endl;
	cout << "Rectangle 4: " << endl;
	p4.display();
	cout << "Perimiter = " << p4.Perimiter() << endl;
	cout << "Area = " << p4.Area() << endl;
	cout << "get p1: " << endl;
	cout << "top left = (" << p.TopLeft().X() << ", " << p.TopLeft().Y() << ")" << endl;
	cout << "bottom right = (" << p.BottomRight().X() << ", " << p.BottomRight().Y() << ")" << endl;
	cout << "set p1:" << endl;
	p.setTopLeft();
	p.setBottomRight();
	cout << "result: " << endl;
	p.display();
	system("pause");
}