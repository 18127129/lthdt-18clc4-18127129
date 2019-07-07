#pragma once
#include <iostream>
#include <string>
using namespace std;
class Date
{
private:
	int day;
	int month;
	int year;
public:
	friend istream& operator >> (istream &is, Date &x)
	{
		cout << "\nDay: ";
		is >> x.day;
		cout << "Month: ";
		is >> x.month;
		cout << "Year: ";
		is >> x.year;
		return is;
	}
	friend ostream& operator << (ostream &os, const Date &x)
	{
		os << x.day << "/" << x.month << "/" << x.year;
		return os;
	}
	Date()
	{
		day = 1;
		month = 1;
		year = 2019;
	}
	~Date(){}
};

class DocGia
{
protected:
	int id;
	string name;
	Date dueDay;
	string gender;
public:
	void inputInfo();
	void outputInfo();
	DocGia();
	~DocGia();
};

