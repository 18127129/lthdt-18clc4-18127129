#include <iostream>
using namespace std;
class Fraction
{
private:
	int nu;
	int de;
public:
	Fraction operator +(Fraction x);
	Fraction operator -(Fraction x);
	Fraction operator *(Fraction x);
	Fraction operator /(Fraction x);
	Fraction& operator =(const Fraction& x);
	Fraction& operator +=(Fraction x);
	Fraction& operator -=(Fraction x);
	Fraction& operator *=(Fraction x);
	Fraction& operator /=(Fraction x);
	Fraction operator +(int x);
	Fraction operator -(int x);
	friend Fraction operator +(int x, Fraction y);
	friend Fraction operator *(int x, Fraction y);
	Fraction operator *(int x);
	Fraction operator /(int x);
	bool operator ==(Fraction x);
	bool operator !=(Fraction x);
	bool operator >=(Fraction x);
	bool operator >(Fraction x);
	bool operator <=(Fraction x);
	bool operator <(Fraction x);
	friend ostream& operator <<(ostream& os, const Fraction& x);
	friend istream& operator >>(istream& is, Fraction& x);
	Fraction& operator ++();
	Fraction operator ++(int x);
	Fraction& operator --();
	Fraction operator --(int x);
	operator float();
	Fraction();
	Fraction(int x, int y);
	Fraction(const Fraction& x);
	~Fraction();
};

