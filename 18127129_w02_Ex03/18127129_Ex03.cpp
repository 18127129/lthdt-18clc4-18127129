#include "Triangle.h"
int main()
{
	float x, y;
	Point p1;
	Point p2(2, 9.5);
	Point p3(p2);
	Triangle q, q2(p1, p2, p3), q3(q2);
	cout << "Triangle 1: " << endl;
	cout << "a = (" << q.A().X() << "," << q.A().Y() << ")" << endl;
	cout << "b = (" << q.B().X() << "," << q.B().Y() << ")" << endl;
	cout << "c = (" << q.C().X() << "," << q.C().Y() << ")" << endl;
	cout << "Triangle 2: " << endl;
	cout << "a = (" << q2.A().X() << "," << q2.A().Y() << ")" << endl;
	cout << "b = (" << q2.B().X() << "," << q2.B().Y() << ")" << endl;
	cout << "c = (" << q2.C().X() << "," << q2.C().Y() << ")" << endl;
	cout << "Triangle 3: " << endl;
	cout << "a = (" << q3.A().X() << "," << q3.A().Y() << ")" << endl;
	cout << "b = (" << q3.B().X() << "," << q3.B().Y() << ")" << endl;
	cout << "c = (" << q3.C().X() << "," << q3.C().Y() << ")" << endl;
	cout << "change triangle: " << endl;
	cout << "ax = ";
	cin >> x;
	cout << "ay = ";
	cin >> y;
	q.setA(x, y);
	cout << "bx = ";
	cin >> x;
	cout << "by = ";
	cin >> y;
	q.setB(x, y);
	cout << "cx = ";
	cin >> x;
	cout << "cy = ";
	cin >> y;
	q.setC(x, y);
	cout << "New Triangle : " << endl;
	cout << "a = (" << q.A().X() << "," << q.A().Y() << ")" << endl;
	cout << "b = (" << q.B().X() << "," << q.B().Y() << ")" << endl;
	cout << "c = (" << q.C().X() << "," << q.C().Y() << ")" << endl;
	system("pause");
}