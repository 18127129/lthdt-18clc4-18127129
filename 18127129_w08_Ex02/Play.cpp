#include "Play.h"
void Play::input()
{
	cout << "Input prince information: " << endl;
	prince.input();
	cout << "How many business gate: ";
	cin >> n1;
	Gate* p;
	for (int i = 0; i < n1; i++)
	{
		p = new BusinessGate;
		p->input();
		gate.push_back(p);
	}
	cout << "How many academic gate: ";
	cin >> n2;
	for (int i = 0; i < n2; i++)
	{
		p = new AcademicGate;
		p->input();
		gate.push_back(p);
	}
	cout << "How many power gate: ";
	cin >> n3;
	for (int i = 0; i < n3; i++)
	{
		p = new PowerGate;
		p->input();
		gate.push_back(p);
	}
}
bool Play::playGate()
{
	for (int i = 0; i < n1; i++)
	{
		if (!prince.goBusinessGate(gate[i]))
			return false;
	}
	for (int i = n1; i < n1 + n2; i++)
	{
		if (!prince.goAcademicGate(gate[i]))
			return false;
	}
	for (int i = n1 + n2; i < gate.size(); i++)
	{
		if (!prince.goPowerGate(gate[i]))
			return false;
	}
	return true;
}
void Play::output()
{
	if (playGate())
	{
		cout << "Win\nRest information of prince" << endl;
		prince.output();
	}
	else
	{
		cout << "Lose" << endl;
	}
}
Play::Play(const Play& x)
{
	prince = x.prince;
	n1 = x.n1;
	n2 = x.n2;
	n3 = x.n3;
	gate = x.gate;
}
void Play::operator = (const Play& x)
{
	prince = x.prince;
	n1 = x.n1;
	n2 = x.n2;
	n3 = x.n3;
	gate = x.gate;
}
Play::~Play()
{
	for (int i = 0; i < gate.size(); i++)
		delete gate[i];
}