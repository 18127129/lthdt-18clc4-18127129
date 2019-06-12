#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <time.h>
using namespace std;
class Date
{
private:
	int dd;
	int mm;
	int yy;
public:
	string ToString();
	friend ostream& operator <<(ostream&, const Date&);
	friend istream& operator >>(istream&, Date&);
	Date* Spare(string line);
	Date();
	Date(int);
	Date(int, int);
	Date(int, int, int);
	Date(const Date&);
	~Date();
};
bool IsLeapYear(int);
bool IsValidYear(int, int, int);
