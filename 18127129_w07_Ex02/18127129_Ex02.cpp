#include "GmtTime.h"
int main()
{
	GmtTime gmt;
	int x, h, m, s;
	cout << "now = " << gmt.ToString(0) << endl;
	cout << "input gmt you want to know ";
	cin >> x;
	cout << "GMT = " << x << " => Time = " << gmt.ToString(x) << endl;
	cout << "hour = ";
	cin >> h;
	cout << "minute = ";
	cin >> m;
	cout << "second = ";
	cin >> s;
	GmtTime gmt2(h, m, s);
	cout << "input gmt you want to know ";
	cin >> x;
	cout << "GMT = " << x << " => Time = " << gmt2.ToString(x) << endl;
	system("pause");
}
