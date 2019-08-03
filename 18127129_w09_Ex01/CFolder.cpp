#include "CFolder.h"



CFolder::CFolder(string str)
{
	name = str;
}
CFolder::CFolder(const CFolder &){}
void CFolder::operator =(const CFolder &){}
void CFolder::add(CItem* item)
{
	subItem.push_back(item);
}
void CFolder::print(bool showHidden)
{
	if (showHidden)
	{
		cout << name << endl;
		for (int i = 0; i < subItem.size(); i++)
		{
			cout << "  ";
			subItem[i]->print(showHidden);
			//cout << "  ";
		}
	}
	else
		if (hidden == false)
		{
			cout << name << endl;
			for (int i = 0; i < subItem.size(); i++)
			{
				cout << "  ";
				subItem[i]->print(showHidden);
			}
		}
}
CItem* CFolder::removeByName(string str)
{
	//if (this->getName() == str)
	//	return NULL;
	CItem* x = NULL;
	for (int i = 0; i < subItem.size(); i++)
	{
		if (subItem[i]->getName() == str)
		{
			x = *subItem.erase(subItem.begin() + i);
		}
		break;
	}
	if (x == NULL)
	{
		for (int i = 0; i < subItem.size(); i++)
		{
			subItem[i]->removeByName(str);
			if (x == NULL)
				break;
		}
	}
	return x;
}
CItem* CFolder::findByName(string str)
{
	CItem* x = NULL;
	for (int i = 0; i < subItem.size(); i++)
	{
		if (subItem[i]->getName() == str)
		{

			x = subItem[i];
			return x;
		}
	}
	if (x == NULL)
	{
		for (int i = 0; i < subItem.size(); i++)
		{
			subItem[i]->findByName(str);
		}
	}
	return x;
}
void CFolder::setHidden(bool isHidden, bool all)
{
	hidden = isHidden;
	if (all)
	{
		for (int i = 0; i < subItem.size(); i++)
			subItem[i]->setHidden(isHidden, all);
	}
}
CFolder::~CFolder()
{
}
