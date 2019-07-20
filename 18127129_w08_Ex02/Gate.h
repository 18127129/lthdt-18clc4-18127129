#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Gate
{
public:
	virtual void input() = 0;
	virtual int play() = 0;
};

