#include "Rectangle.h"
#include <iostream>
using namespace std;
int main()
{
	float x, y;
	Point p1(1, 2);
	Point p2(3, 2);
	Rectangle h, h2(p1, p2), h3(h2);
	cout << "Rectangle 1: " << endl;
	cout << "top left = (" << h.TopLeft().X() << ", " << h.TopLeft().Y() << ")" << endl;
	cout << "bottom right = (" << h.BottomRight().X() << ", " << h.BottomRight().Y() << ")" << endl;
	cout << "Rectangle 2: " << endl;
	cout << "top left = (" << h2.TopLeft().X() << ", " << h2.TopLeft().Y() << ")" << endl;
	cout << "bottom right = (" << h2.BottomRight().X() << ", " << h2.BottomRight().Y() << ")" << endl;
	cout << "Rectangle 3: " << endl;
	cout << "top left = (" << h3.TopLeft().X() << ", " << h3.TopLeft().Y() << ")" << endl;
	cout << "bottom right = (" << h3.BottomRight().X() << ", " << h3.BottomRight().Y() << ")" << endl;
	cout << "change rectangle: " << endl;
	cout << "top left: " << endl;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	h.setTopLeft(x, y);
	cout << "bottom right: " << endl;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	h.setBottomRight(x, y);
	cout << "New Rectangle: " << endl;
	cout << "top left = (" << h.TopLeft().X() << ", " << h.TopLeft().Y() << ")" << endl;
	cout << "bottom right = (" << h.BottomRight().X() << ", " << h.BottomRight().Y() << ")" << endl;
	system("pause");
}