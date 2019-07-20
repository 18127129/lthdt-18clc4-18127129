#pragma once
#include "Prince.h"
class Play
{
protected:
	Prince prince;
	int n1;
	int n2;
	int n3;
	vector <Gate*> gate;
public:
	void input();
	void output();
	bool playGate();
	Play(){}
	Play(const Play&);
	void operator = (const Play&);
	~Play();
};

