#include <iostream>
using namespace std;
class Date
{
private:
	int dd;
	int mm;
	int yy;
public:
	Date Yesterday();
	Date Tomorrow();
	bool operator ==(Date);
	bool operator !=(Date);
	bool operator >=(Date);
	bool operator <=(Date);
	bool operator >(Date);
	bool operator <(Date);
	Date& operator =(const Date&);
	Date operator +(int);
	Date operator -(int);
	Date& operator ++();
	Date operator ++(int);
	Date& operator --();
	Date operator --(int);
	friend ostream& operator <<(ostream&, const Date&);
	friend istream& operator >>(istream&, Date&);
	operator int();
	operator long();
	Date& operator += (int);
	Date& operator -= (int);
	Date();
	Date(int);
	Date(int, int);
	Date(int, int, int);
	Date(const Date&);
	~Date();
};

