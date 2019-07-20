#pragma once
#include "NV.h"
class NVCN :public NV
{
protected:
	int m_dayWork;
	int m_subsidize;
public:
	long Salary();
	void input();
	void output();
};