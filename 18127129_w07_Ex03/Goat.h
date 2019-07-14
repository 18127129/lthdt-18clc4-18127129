#pragma once
#include "Cattle.h"
class Goat :public Cattle
{
public:
	int born();
	int getMilk();
	void sound();
	Goat();
	Goat(int, int, int);
};

