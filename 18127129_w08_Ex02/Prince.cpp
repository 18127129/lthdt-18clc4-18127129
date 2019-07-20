#include "Prince.h"
void Prince::input()
{
	cout << "Business indicator = ";
	cin >> businessPoint;
	cout << "Academic indicator = ";
	cin >> academicPoint;
	cout << "Power indicator = ";
	cin >> powerPoint;
}
bool Prince::goBusinessGate(Gate* x)
{
	businessPoint -= x->play();
	if (businessPoint < 0)
		return false;
	else
		return true;
}
bool Prince::goAcademicGate(Gate* x)
{
	if (academicPoint < x->play())
		return false;
	else
		return true;
}
bool Prince::goPowerGate(Gate* x)
{
	powerPoint -= x->play();
	if (powerPoint < 0)
		return false;
	else
		return true;
}
void Prince::output()
{
	cout << "Business indicator = " << businessPoint << endl;
	cout << "Academic indicator = " << academicPoint << endl;
	cout << "Power indicator = " << powerPoint << endl;
}