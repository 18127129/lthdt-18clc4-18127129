#include "Triangle.h"
int main()
{
	Point a(1, 2), b(3, 4), c(5, 6);
	Triangle x, x2(a, b, c), x3(9, 8, 7, 6, 10, 0), x4(x3);
	cout << "Triangle 1\n" << x.ToString();
	cout << "Triangle 2\n" << x2.ToString();
	cout << "Triangle 3\n" << x3.ToString();
	cout << "Triangle 4\n" << x4.ToString();
	x.Parse("(6, 15), (1, 20), (61, 92)");
	cout << "Triangle Parse\n" << x.ToString();
	system("pause");
}