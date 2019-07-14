#pragma once
#include "Cattle.h"
class Cow : public Cattle
{
public:
	void sound();
	int born();
	int getMilk();
	Cow();
	Cow(int, int, int);
};

