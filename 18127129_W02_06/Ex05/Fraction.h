#include <iostream>
using namespace std;
class Fraction
{
private:
	int num;
	int den;
public:
	int Num();
	int Den();
	void setNum(int x);
	void setDen(int x);
public:
	Fraction();
	Fraction(int, int);
	Fraction(const Fraction &x);
	~Fraction();
};

