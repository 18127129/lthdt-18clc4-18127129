#include "Date.h"
void main()
{
	Date d1; 				// Current date: 2/11/2012
	Date d2(2012); 			// 1/1/2012;
	Date d3(2012, 8);		// 01/08/2012
	Date d4(2012, 10, 17); 	// 17/10/2012
	Date d5(d2);
	Date d6;
	d6 = d3;
	cout << "d1 " << d1;
	cout << "d2 " << d2;
	cout << "d3 " << d3;
	cout << "d4 " << d4;
	cout << "d5 " << d5;
	cout << "d6 " << d6;
	d6 = d3.Tomorrow();
	d5 = d2.Yesterday();
	cout << "d6 " << d6;
	cout << "d5 " << d5;
	cout << (d6 == d4); cout << endl;
	cout << (d6 != d4); cout << endl;
	cout << (d6 >= d4); cout << endl;
	cout << (d6 <= d4); cout << endl;
	cout << (d6 > d4); cout << endl;
	cout << (d6 < d4); cout << endl;

	d3 = d2 + 1;
	cout << "d3 " << d3;
	d2 = d3 - 2;
	cout << "d2 " << d2;
	d4++;
	cout << "d4 " << d4;
	++d2;
	cout << "d2 " << d2;
	d5--;
	cout << "d5 " << d5;
	--d6;
	cout << "d6 " << d6;

	cout << d3;
	cin >> d4;

	cout << (int)d3 << endl;			// from the first day of current year

	cout << (long)d4 << endl; 		// from 1/1/1

	Date d7;
	d7 += 7;
	cout << "d7 " << d7;
	d2 -= 6;
	cout << "d2 " << d2;
	system("pause");
}