#include <iostream>
#include <string>
#include <sstream>
using namespace std;
class Fraction
{
private:
	int nu;
	int de;
public:
	string ToString();
	Fraction* Parse(string line);
	friend ostream& operator <<(ostream& os, const Fraction& x);
	friend istream& operator >>(istream& is, Fraction& x);
	Fraction();
	Fraction(int x, int y);
	Fraction(const Fraction& x);
	~Fraction();
};

