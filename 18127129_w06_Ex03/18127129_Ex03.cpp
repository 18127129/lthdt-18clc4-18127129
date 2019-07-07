#include "DocGiaTHuong.h"
#include "DocGiaVIP.h"
int main()
{
	DocGiaThuong dgt;
	cout << "Input normal reader" << endl;
	dgt.inputInfo();
	DocGiaVIP dgVip;
	cout << "Input VIP reader" << endl;
	dgVip.inputInfo();
	cout << "Normal reader: " << endl;
	dgt.outputInfo();
	cout << "Fee: " << dgt.fee() << endl;
	cout << "Vip reader: " << endl;
	dgVip.outputInfo();
	cout << "Fee: " << dgVip.fee() << endl;
	system("pause");
}