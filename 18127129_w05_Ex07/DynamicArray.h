#include <iostream>
#include<string>
#include<vector>
#include <sstream>
using namespace std;
class DynamicArray
{
private:
	const int Initial_size = 128;
	int *a;
	int len;
	int max;
public:
	string ToString();
	DynamicArray* Parse(string line);
	void display();
	void PushBack(int value);
	int GetAt(int index);
	DynamicArray();
	DynamicArray(int lenth);
	DynamicArray(int len, int* arr);
	DynamicArray(const DynamicArray& x);
	~DynamicArray();
};