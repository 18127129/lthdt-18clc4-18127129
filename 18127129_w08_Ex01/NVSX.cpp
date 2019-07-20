#include "NVSX.h"
void NVSX::input()
{
	cout << "Basic salary: ";
	cin >> m_basicSalary;
	cout << "Number of products: ";
	cin >> m_product;
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
void NVSX::output()
{
	cout << "\nID: " << m_id << endl;
	cout << "Name: " << m_name << endl;
	cout << "Dob: " << m_day_dob << "/" << m_month_dob << "/" << m_year_dob << endl;
	cout << "Year start: " << m_yearStart << endl;
	cout << "Number of products: " << m_product << endl;
	cout << "Salary: " << Salary() << endl;
}
long NVSX::Salary()
{
	return m_basicSalary + m_product * 2000;
}
