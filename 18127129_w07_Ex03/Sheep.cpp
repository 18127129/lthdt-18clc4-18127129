#include "Sheep.h"
int Sheep::born()
{
	srand(time(NULL));
	int sum = 0;
	int x;
	for (int i = 0; i < female; i++)
	{
		x = rand() % 2 + 1;
		cout << "sheep " << i + 1 << " born " << x << endl;
		sum += x;
	}
	return sum;
}
int Sheep::getMilk()
{
	srand(time(NULL));
	int sum = 0;
	int x;
	for (int i = 0; i < female; i++)
	{
		x = rand() % (milkMax + 1);
		cout << "sheep " << i + 1 << " = " << x << "l" << endl;
		sum += x;

	}
	return sum;
}
void Sheep::sound()
{
	cout << "Bee Bee Bee" << endl;
}
Sheep::Sheep() : Cattle()
{
	milkMax = 5;
}
Sheep::Sheep(int n, int m, int x) : Cattle(n, m, x)
{
	milkMax = 5;
}
