#include <iostream>
using namespace std;
class IntArray
{
private:
	int* a;
	int n;
public:
	IntArray& operator =(const IntArray&);
	int& operator [](int);
	friend ostream& operator << (ostream& os, IntArray);
	friend istream& operator >> (istream& is, IntArray&);
	operator int();
	IntArray();
	IntArray(int);
	IntArray(int[], int);
	IntArray(const IntArray&);
	~IntArray();
};

