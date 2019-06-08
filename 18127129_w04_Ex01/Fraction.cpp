#include "Fraction.h"
Fraction Fraction::operator +(Fraction x)
{
	Fraction result;
	result.nu = nu * x.de + x.nu * de;
	result.de = de * x.de;
	return result;
}
Fraction Fraction::operator -(Fraction x)
{
	Fraction result;
	result.nu = nu * x.de - x.nu * de;
	result.de = de * x.de;
	return result;
}
Fraction Fraction::operator *(Fraction x)
{
	Fraction result;
	result.nu = nu * x.nu;
	result.de = de * x.de;
	return result;
}
Fraction Fraction::operator /(Fraction x)
{
	if (x.nu == 0)
		throw "Divide by zero exception\n";
	Fraction result;
	result.nu = nu * x.de;
	result.de = de * x.nu;
	return result;
}
Fraction& Fraction::operator =(const Fraction& x)
{
	nu = x.nu;
	de = x.de;
	return *this;
}
Fraction Fraction::operator +(int x)
{
	Fraction result;
	result.nu = nu + x * de;
	result.de = de;
	return result;
}
Fraction Fraction::operator -(int x)
{
	Fraction result;
	result.nu = nu - x * de;
	result.de = de;
	return result;
}
Fraction operator +(int x, Fraction y)
{
	Fraction result;
	result.nu = y.nu + x * y.de;
	result.de =y.de;
	return result;
}
Fraction operator *(int x, Fraction y)
{
	Fraction result;
	result.nu = y.nu * x;
	result.de = y.de;
	return result;
}
Fraction Fraction::operator *(int x)
{
	Fraction result;
	result.nu = nu * x;
	result.de = de;
	return result;
}
Fraction Fraction::operator /(int x)
{
	Fraction result;
	result.nu = nu;
	result.de = de * x;
	return result;
}
Fraction& Fraction::operator +=(Fraction x)
{
	nu = nu * x.de + x.nu * de;
	de = de * x.de;
	return *this;
}
Fraction& Fraction::operator -=(Fraction x)
{
	nu = nu * x.de - x.nu * de;
	de = de * x.de;
	return *this;
}
Fraction& Fraction::operator *=(Fraction x)
{
	nu = nu * x.nu;
	de = de * x.de;
	return *this;
}
Fraction& Fraction::operator /=(Fraction x)
{
	if (x.nu == 0)
		throw "Divide by zero exception\n";
	nu = nu * x.de;
	de = de * x.nu;
	return *this;
}
bool Fraction::operator ==(Fraction x)
{
	return nu * 1.0 / de == x.nu * 1.0 / x.de;
}
bool Fraction::operator !=(Fraction x)
{
	return nu * 1.0 / de != x.nu * 1.0 / x.de;
}
bool Fraction::operator >=(Fraction x)
{
	return nu * 1.0 / de >= x.nu * 1.0 / x.de;
}
bool Fraction::operator >(Fraction x)
{
	return nu * 1.0 / de > x.nu * 1.0 / x.de;
}
bool Fraction::operator <=(Fraction x)
{
	return nu * 1.0 / de <= x.nu * 1.0 / x.de;
}
bool Fraction::operator <(Fraction x)
{
	return nu * 1.0 / de < x.nu * 1.0 / x.de;
}
ostream& operator <<(ostream& os, const Fraction& x)
{
	os << x.nu << "/" << x.de << endl;
	return os;
}
istream& operator >>(istream& is, Fraction& x)
{
	is >> x.nu >> x.de;
	return is;
}
Fraction& Fraction::operator ++()
{
	nu = nu + de;
	return *this;
}
Fraction Fraction::operator ++(int x)
{
	Fraction a = *this;
	nu = nu + de;
	return *this;
}
Fraction& Fraction::operator --()
{
	nu = nu - de;
	return *this;
}
Fraction Fraction::operator --(int x)
{
	Fraction a = *this;
	nu = nu - de;
	return *this;
}
Fraction::operator float()
{
	return nu * 1.0 / de;
}
Fraction::Fraction()
{
	nu = 0;
	de = 1;
}
Fraction::Fraction(int x, int y)
{
	if (x * y >= 0)
	{
		nu = abs(x);
		de = abs(y);
	}
	if (x * y <= 0)
	{
		nu = -abs(x);
		de = abs(y);
	}
}
Fraction::Fraction(const Fraction& x)
{
	nu = x.nu;
	de = x.de;
}
Fraction::~Fraction()
{
}
