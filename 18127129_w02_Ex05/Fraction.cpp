#include "Fraction.h"
int Fraction::Num()
{
	return num;
}
int Fraction::Den()
{
	return den;
}
void Fraction::setNum(int x)
{
	num = x;
}
void Fraction::setDen(int x)
{
	den = x;
}
Fraction::Fraction()
{
	num = 0;
	den = 1;
}
Fraction::Fraction(int x, int y)
{
	num = x;
	den = y;
}
Fraction::Fraction(const Fraction &x)
{
	num = x.num;
	den = x.den;
}
Fraction::~Fraction()
{
}
