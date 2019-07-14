#pragma once
#include "Cattle.h"
class Sheep :public Cattle
{
public:
	int born();
	int getMilk();
	void sound();
	Sheep();
	Sheep(int, int, int);
};

