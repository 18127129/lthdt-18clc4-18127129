#include "Date.h"
string Date::ToString()
{
	stringstream writer;
	writer << dd << "/" << mm << "/" << yy;
	return writer.str();
}
ostream& operator <<(ostream& os, const Date& x)
{
	os << x.dd << "/" << x.mm << "/" << x.yy << endl;
	return os;
}
istream& operator >>(istream& is, Date& x)
{
	cout << "day: ";
	cin >> x.dd;
	cout << "month: ";
	cin >> x.mm;
	cout << "year: ";
	cin >> x.yy;
	return is;
}
Date* Date::Spare(string line)
{
	vector<string> v;
	int startPos = 0;
	int foundPos = line.find("/", startPos);
	while (foundPos != string::npos)
	{
		int count = foundPos - startPos;
		string str = line.substr(startPos, count);
		v.push_back(str);
		startPos = foundPos + 1;
		foundPos = line.find("/", startPos);
	}
	int count = line.length() - startPos;
	string str = line.substr(startPos, count);
	v.push_back(str);
	dd = stoi(v[0]);
	mm = stoi(v[1]);
	yy = stoi(v[2]);
	return this;
}
Date::Date()
{
	time_t now = time(0);
	tm local;
	localtime_s(&local, &now);
	dd = local.tm_mday;
	mm = local.tm_mon + 1;
	yy = local.tm_year + 1900;
}

Date::Date(int year)
{
	dd = 1;
	mm = 1;
	yy = year;
}
Date::Date(int month, int year)
{
	yy = year;
	mm = month;
	dd = 1;
}
Date::Date(int day, int month, int year)
{
	yy = year;
	mm = month;
	dd = day;
}
Date::Date(const Date& x)
{
	dd = x.dd;
	mm = x.mm;
	yy = x.yy;
}
Date::~Date()
{
}
bool IsLeapYear(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
bool IsValidYear(int day, int month, int year)
{
	return ((1 <= day && day <= 30 ) && (1 <= month && month <= 12) && (0 < year));
}