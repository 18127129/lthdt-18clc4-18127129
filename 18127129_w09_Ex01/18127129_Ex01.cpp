#include "CFolder.h"
#include "CFile.h"
void main()
{
	CFolder C("C");
	CFolder System("System");
	CFolder Windows("Windows");
	CFile a_txt("a.txt", 123);
	CFile b_doc("b.doc", 456);
	System.add(&a_txt);
	Windows.add(&b_doc);
	C.add(&System);
	C.add(&Windows);
	cout << "Noi dung o dia C ->" << endl;
	C.print(0); // print hidden items or not? 1/0
	CItem* p = C.removeByName("System");
	cout << "Noi dung o dia C sau khi xoa thu muc System ->" << endl;
	C.print(0);
	cout << p->getName() << endl;
	if (p != NULL)
	{
		cout << "Tim thay tap tin b.doc trong o dia C" << endl;
	}
	else
	{
		cout << "Khong tim thay tap tin b.doc trong o dia C" << endl;
	}
	p = C.findByName("a.txt");
	if (p != NULL)
	{
		cout << "Tim thay tap tin a.txt trong o dia C" << endl;
	}
	else
	{
		cout << "Khong tim thay tap tin a.txt trong o dia C" << endl;
	}
	p = C.findByName("Windows");
	cout << p->getName() << endl;
	if (p != NULL)
	{
		cout << "Tim thay thu muc Windows trong o dia C, noi dung thu muc Windows ->"
			<< endl;
		p->setHidden(true, true); // set HIDDEN to folder p and all its items
		p->print(0);
		p->setHidden(false, true); // set UN-HIDDEN to folder p and all its items
	}
	else
	{
		cout << "Khong tim thay thu muc Windows trong o dia C" << endl;
	}
	system("pause");
}