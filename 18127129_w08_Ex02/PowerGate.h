#pragma once
#include "Gate.h"
class PowerGate :public Gate
{
	int power;
public:
	void input();
	int play();
};

