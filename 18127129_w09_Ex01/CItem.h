#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class CItem
{
protected:
	bool hidden = false;
	bool readonly = false;
	string name;
	int size;
public:
	virtual void print(bool) = 0;
	virtual CItem* removeByName(string) = 0;
	string getName();
	virtual CItem* findByName(string) = 0;
	virtual void setHidden(bool, bool) = 0;
};