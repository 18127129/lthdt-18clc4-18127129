#include "BusinessGate.h"
void BusinessGate::input()
{
	cout << "Price of product = ";
	cin >> price;
	cout << "Number of products = ";
	cin >> quantity;
}
int BusinessGate::play()
{
	return price * quantity;
}
