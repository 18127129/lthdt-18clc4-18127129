#pragma once
#include "Time.h"
class GmtTime :public Time
{
public:
	string ToString(int);
	GmtTime();
	GmtTime(int, int, int);
};

