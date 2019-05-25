#include <iostream>
#include "Line.h"
using namespace std;

int main()
{
	Point a(1.0, 1.0);
	Point b(2.0, 2.0);
	Line p(a, b);
	cout << "start: (" << p.start().X() << "," << p.start().Y() << ")";
	cout << "end: (" << p.end().X() << "," << p.end().Y() << ")";
	system("pause");
}