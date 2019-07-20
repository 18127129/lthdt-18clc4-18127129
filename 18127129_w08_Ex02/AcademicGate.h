#pragma once
#include "Gate.h"
class AcademicGate :public Gate
{
protected:
	int wisdom;
public:
	void input();
	int play();
};

