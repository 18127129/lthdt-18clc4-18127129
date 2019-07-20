#pragma once
#include "BusinessGate.h"
#include "AcademicGate.h"
#include "PowerGate.h"
class Prince
{
protected:
	int businessPoint;
	int academicPoint;
	int powerPoint;
public:
	bool goBusinessGate(Gate*);
	bool goAcademicGate(Gate*);
	bool goPowerGate(Gate*);
	void input();
	void output();
};

