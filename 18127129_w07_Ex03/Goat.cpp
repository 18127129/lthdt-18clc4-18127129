#include "Goat.h"
int Goat::born()
{
	srand(time(NULL));
	int sum = 0;
	int x;
	for (int i = 0; i < female; i++)
	{
		x = rand() % 2 + 1;
		cout << "goat " << i + 1 << " born " << x << endl;
		sum += x;
	}
	return sum;
}
int Goat::getMilk()
{
	srand(time(NULL));
	int sum = 0;
	int x;
	for (int i = 0; i < female; i++)
	{
		x = rand() % (milkMax + 1);
		cout << "goat " << i + 1 << " = " << x << "l" << endl;
		sum += x;

	}
	return sum;
}
void Goat::sound()
{
	cout << "Ee Ee Ee" << endl;
}
Goat::Goat() : Cattle()
{
	milkMax = 10;
}
Goat::Goat(int n, int m, int x) : Cattle(n, m, x)
{
	milkMax = 10;
}
