#include "NVCN.h"
long NVCN::Salary()
{
	return m_basicSalary + m_dayWork * 100000 + m_subsidize;
}
void NVCN::input()
{
	cout << "Basic salary: ";
	cin >> m_basicSalary;
	cout << "ID: ";
	cin >> m_id;
	cin.ignore(10, '\n');
	cout << "Name: ";
	getline(cin, m_name);
	cout << "Dob" << endl;
	cout << "day = ";
	cin >> m_day_dob;
	cout <<  "month = ";
	cin >> m_month_dob;
	cout << "year = ";
	cin >> m_year_dob;
	cout << "Year start: ";
	cin >> m_yearStart;
	cout << "Day work: ";
	cin >> m_dayWork;
	cout << "Subsidize: ";
	cin >> m_subsidize;
}
void NVCN::output()
{
	cout << "\nID: " << m_id << endl;
	cout << "Name: " << m_name << endl;
	cout << "Dob: " << m_day_dob << "/" << m_month_dob << "/" << m_year_dob << endl;
	cout << "Year start: " << m_yearStart << endl;
	cout << "Day work: " << m_dayWork << endl;
	cout << "Subsidize: " << m_subsidize << endl;
	cout << "Salary: " << Salary() << endl;
}
