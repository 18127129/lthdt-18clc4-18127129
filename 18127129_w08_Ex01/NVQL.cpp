#include "NVQL.h"
void NVQL::input()
{
	cout << "Basic salary: ";
	cin >> m_basicSalary;
	cout << "Coefficient of roll: ";
	cin >> m_coef;
	cout << "Bonus: ";
	cin >> m_bonus;
	cout << "ID: ";
	cin >> m_id;
	cin.ignore(10, '\n');
	cout << "Name: ";
	getline(cin, m_name);
	cout << "Dob" << endl;
	cout << "day = ";
	cin >> m_day_dob;
	cout << "month = ";
	cin >> m_month_dob;
	cout << "year = ";
	cin >> m_year_dob;
	cout << "Year start: ";
	cin >> m_yearStart;
}
void NVQL::output()
{
	cout << "\nID: " << m_id << endl;
	cout << "Name: " << m_name << endl;
	cout << "Dob: " << m_day_dob << "/" << m_month_dob << "/" << m_year_dob << endl;
	cout << "Year start: " << m_yearStart << endl;
	cout << "Coefficent of roll: " << m_coef << endl;
	cout << "Bonus: " << m_bonus << endl;
	cout << "Salary: " << Salary() << endl;
}
long NVQL::Salary()
{
	return m_basicSalary * m_coef + m_bonus;
}
