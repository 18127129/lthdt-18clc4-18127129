#include <iostream>
using namespace std;
class Singleton
{
private:
	int m_value;
	static Singleton *s_instance;
	Singleton(int v = 0)
	{
		m_value = v;
	}
public:
	int get_value()
	{
		return m_value;
	}
	void set_value(int v)
	{
		m_value = v;
	}
	static Singleton *instance()
	{
		if (!s_instance)
			s_instance = new Singleton;
		return s_instance;
	}
};
Singleton *Singleton::s_instance = 0;

void X()
{
	Singleton::instance()->set_value(1);
	cout << "X: value = " << Singleton::instance()->get_value() << '\n';
}

void Y()
{
	Singleton::instance()->set_value(2);
	cout << "Y: value = " << Singleton::instance()->get_value() << '\n';
}

int main()
{
	cout << "Main: value = " << Singleton::instance()->get_value() << '\n';
	X();
	Y();
	system("pause");
}