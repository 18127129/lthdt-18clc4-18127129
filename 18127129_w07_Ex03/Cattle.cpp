#include "Cattle.h"
int Cattle::born()
{
	srand(time(NULL));
	int sum = 0;
	int x;
	for (int i = 0; i < female; i++)
	{
		x = rand() % 2 + 1;
		cout << "cattle " << i + 1 << " born " << x << endl;
		sum += x;
	}
	return sum;
}
int Cattle::getMilk()
{
	srand(time(NULL));
	int sum = 0;
	int x;
	for (int i = 0; i < female; i++)
	{
		x = rand() % (milkMax + 1);
		cout << "cattle " << i + 1 << " = " << x << "l" << endl;
		sum += x;

	}
	return sum;
}
void Cattle::sound(){}
Cattle::Cattle()
{
	male = 0;
	female = 0;
	children = 0;
}
Cattle::Cattle(int n, int m, int x)
{
	male = n;
	female = m;
	children = x;
}