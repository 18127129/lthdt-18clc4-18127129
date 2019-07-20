#include "PowerGate.h"
void PowerGate::input()
{
	cout << "Power indicator = ";
	cin >> power;
}
int PowerGate::play()
{
	return power;
}
