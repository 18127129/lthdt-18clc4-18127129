#pragma once
#include <iostream>
#include <string>
using namespace std;
class NV
{
protected:
	string m_name;
	int m_yearStart;
	long m_basicSalary;
	int m_id;
	int m_day_dob;
	int m_month_dob;
	int m_year_dob;
public:
	virtual long Salary() = 0;
	virtual void input() = 0;
	virtual void output() = 0;
	string getName();
	int getID();
	int getMonthDob();
};

