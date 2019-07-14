#include "Cow.h"
#include "Sheep.h"
#include "Goat.h"
int main()
{
	Cow c1;
	Sheep s1;
	Goat g1;
	cout << "sound" << endl;
	c1.sound();
	s1.sound();
	g1.sound();
	int x, y, z;
	cout << "Male cow = ";
	cin >> x;
	cout << "Female cow = ";
	cin >> y;
	cout << "Children cow = ";
	cin >> z;
	Cow c(x, y, z);
	cout << "total born " << c.born() << " cows" << endl;
	cout << "total milk = " << c.getMilk() << "l" << endl;
	cout << "Male sheep = ";
	cin >> x;
	cout << "Female sheep = ";
	cin >> y;
	cout << "Children sheep = ";
	cin >> z;
	Sheep s(x, y, z);
	cout << "total born " << s.born() << " sheeps" << endl;
	cout << "total milk = " << s.getMilk() << "l" << endl;
	cout << "Male goat = ";
	cin >> x;
	cout << "Female goat = ";
	cin >> y;
	cout << "Children goat = ";
	cin >> z;
	Goat g(x, y, z);
	cout << "total born " << g.born() << " goats" << endl;
	cout << "total milk = " << g.getMilk() << "l" << endl;
	system("pause");
}