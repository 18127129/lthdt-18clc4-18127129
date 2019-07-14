#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
class Cattle
{
protected:
	int male;
	int female;
	int children;
	int milkMax;
public:
	int born();
	int getMilk();
	void sound();
	Cattle();
	Cattle(int, int, int);
};

