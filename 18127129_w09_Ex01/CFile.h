#pragma once
#include "CItem.h"
class CFile : public CItem
{
	
public:
	CFile(string, int);
	void print(bool);
	CItem* removeByName(string);
	CItem* findByName(string);
	void setHidden(bool, bool);
};

