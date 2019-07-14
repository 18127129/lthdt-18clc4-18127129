#include "Cow.h"
int Cow::born()
{
	srand(time(NULL));
	int sum = 0;
	int x;
	for (int i = 0; i < female; i++)
	{
		x = rand() % 2 + 1;
		cout << "cow " << i + 1 << " born " << x << endl;
		sum += x;
	}
	return sum;
}
int Cow::getMilk()
{
	srand(time(NULL));
	int sum = 0;
	int x;
	for (int i = 0; i < female; i++)
	{
		x = rand() % (milkMax + 1);
		cout << "cow " << i + 1 << " = " << x << "l" << endl;
		sum += x;

	}
	return sum;
}
void Cow::sound()
{
	cout << "Moo Moo Moo" << endl;
}
Cow::Cow() : Cattle()
{ 
	milkMax = 20;
}
Cow::Cow(int n, int m, int x) : Cattle(n, m, x)
{
	milkMax = 20;
}

