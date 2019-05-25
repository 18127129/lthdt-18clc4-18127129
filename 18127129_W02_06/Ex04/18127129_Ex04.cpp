#include "Circle.h"
int main()
{
	float a, b;
	Circle c1;
	cout << "circle 1: " << endl;
	cout << "center = (" << c1.Center().X() << ", " << c1.Center().Y() << ")" << endl;
	cout << "R = " << c1.Radius() << endl;
	Point x(3, 5);
	Circle c2(x, 10), c3(c2);
	cout << "circle 2: " << endl;
	cout << "center = (" << c2.Center().X() << ", " << c2.Center().Y() << ")" << endl;
	cout << "R = " << c2.Radius() << endl;
	cout << "circle 3: " << endl;
	cout << "center = (" << c3.Center().X() << ", " << c3.Center().Y() << ")" << endl;
	cout << "R = " << c3.Radius() << endl;
	cout << "change Circle: " << endl;
	cout << "Center: " << endl;
	cout << "x = ";
	cin >> a;
	cout << "y = ";
	cin >> b;
	c3.setCenter(a, b);
	cout << "radius = ";
	cin >> a;
	c3.setRadius(a);
	cout << "new circle: " << endl;
	cout << "center = (" << c3.Center().X() << ", " << c3.Center().Y() << ")" << endl;
	cout << "R = " << c3.Radius() << endl;
	system("pause");
}