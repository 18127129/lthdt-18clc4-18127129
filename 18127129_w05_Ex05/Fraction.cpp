#include "Fraction.h"
string Fraction::ToString()
{
	if (de == 0)
	{
		throw "error, because the denominator = 0";
	}
	stringstream writer;
	writer << nu << "/" << de;
	return writer.str();
}
Fraction* Fraction::Parse(string line)
{
	int found = line.find("/", 0);
	string str = line.substr(0, found);
	nu = stoi(str);
	str = line.substr(found + 1, line.length() - found - 1);
	de = stoi(str);
	if (de == 0)
	{
		throw "error, because the denominator = 0";
	}
	return this;
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
