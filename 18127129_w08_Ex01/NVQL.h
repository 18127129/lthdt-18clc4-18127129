#pragma once
#include "NV.h"
class NVQL :public NV
{
protected:
	int m_coef;
	int m_bonus;
public:
	long Salary();
	void input();
	void output();
};

