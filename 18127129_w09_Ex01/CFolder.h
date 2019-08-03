#pragma once
#include "CItem.h"
class CFolder : public CItem
{
	vector <CItem*> subItem;
public:
	CFolder(string);
	CFolder(const CFolder &);
	void operator =(const CFolder &);
	void add(CItem*);
	void print(bool);
	CItem* removeByName(string);
	CItem* findByName(string);
	void setHidden(bool, bool);
	~CFolder();
};

