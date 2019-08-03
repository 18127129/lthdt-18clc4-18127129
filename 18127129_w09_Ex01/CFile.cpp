#include "CFile.h"



CFile::CFile(string str, int x)
{
	name = str;
	size = x;
}
void CFile::print(bool showHidden)
{
	if (showHidden)
		cout << "  " << name << endl;
	else
		if (hidden == false)
			cout << "  " << name << endl;
}
CItem* CFile::removeByName(string str)
{
	return NULL;
}
CItem* CFile::findByName(string str)
{
	if (name == str)
		return this;
	else
		return NULL;
}
void CFile::setHidden(bool isHidden, bool all)
{
	hidden = isHidden;
}
