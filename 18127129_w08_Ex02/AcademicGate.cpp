#include "AcademicGate.h"
void AcademicGate::input()
{
	cout << "Academic indicator = ";
	cin >> wisdom;
}
int AcademicGate::play()
{
	return wisdom;
}
