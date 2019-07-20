#pragma once
#include <iostream>
#include <vector>
#include "Gate.h"
using namespace std;
class BusinessGate :public Gate
{
protected:
	int price;
	int quantity;
public:
	void input();
	int play();
};

