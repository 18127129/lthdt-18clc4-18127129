#include "Congty.h"
void Congty::input()
{
	NV* p;
	cout << "Number of NVCN = ";
	cin >> n1;
	for (int i = 0; i < n1; i++)
	{
		p = new NVCN;
		p->input();
		cout << endl;
		m_nv.push_back(p);
	}
	cout << "Number of NVSX = ";
	cin >> n2;
	for (int i = 0; i < n2; i++)
	{
		p = new NVSX;
		p->input();
		cout << endl;
		m_nv.push_back(p);
	}
	cout << "Number of NVQL = ";
	cin >> n3;
	for (int i = 0; i < n3; i++)
	{
		p = new NVQL;
		p->input();
		cout << endl;
		m_nv.push_back(p);
	}
}
void Congty::output()
{
	cout << "\nNVCN information" << endl;
	for (int i = 0; i < n1; i++)
	{
		m_nv[i]->output();
	}
	cout << "\nNVSX information" << endl;
	for (int i = n1; i < n1 + n2; i++)
	{
		m_nv[i]->output();
	}
	cout << "\nNVCN information" << endl;
	for (int i = n1 + n2; i < m_nv.size(); i++)
	{
		m_nv[i]->output();
	}
}
long Congty::totalSalary()
{
	long sum = 0;
	for (int i = 0; i < m_nv.size(); i++)
		sum += m_nv[i]->Salary();
	return sum;
}
void Congty::maxSalaryName()
{
	long max = m_nv[0]->Salary();
	string* name;
	for (int i = 0; i < m_nv.size(); i++)
	{
		if (max < m_nv[i]->Salary())
			max = m_nv[i]->Salary();
	}
	cout << "Max Salary Employees: " << endl;
	for (int i = 0; i < m_nv.size(); i++)
	{
		if (max == m_nv[i]->Salary())
			cout << m_nv[i]->getName() << endl;
	}
}
int Congty::quantitiesOfNVSX()
{
	return n2;
}
int Congty::quantitiesOfNVCN()
{
	return n1;
}
void Congty::NameUnder3M()
{
	cout << "List of Employees Salary < 3000000" << endl;
	for (int i = 0; i < m_nv.size(); i++)
		if (m_nv[i]->Salary() < 3000000)
			cout << m_nv[i]->getName() << endl;
}
long Congty::averageSalary()
{
	return totalSalary() * 1.0 / m_nv.size();
}
void Congty::findEmployeeByID()
{
	cout << "Find Employee By ID" << endl;
	int id;
	cout << "ID: ";
	cin >> id;
	for (int i = 0; i < m_nv.size(); i++)
	{
		if (m_nv[i]->getID() == id)
		{
			cout << m_nv[i]->getName() << endl;
			return;
		}
	}
	cout << "There is no this employee has this ID" << endl;
}
void Congty::findEmployeeByName()
{
	cout << "Find Employee By Name" << endl;
	string name;
	cout << "ID: ";
	cin.ignore(10, '\n');
	getline(cin, name);
	for (int i = 0; i < m_nv.size(); i++)
	{
		if (m_nv[i]->getName() == name)
		{
			cout << m_nv[i]->getName() << endl;
			return;
		}
	}
	cout << "There is no this employee has this name" << endl;
}
int Congty::quantitiesEmployeesBornInMay()
{
	int count = 0;
	for (int i = 0; i < m_nv.size(); i++)
	{
		if (m_nv[i]->getMonthDob() == 5)
		{
			count++;
		}
	}
	return count;
}
Congty::~Congty()
{
	for (int i = 0; i < m_nv.size(); i++)
		delete m_nv[i];
}