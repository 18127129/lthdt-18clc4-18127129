#include "DocGiaThuong.h"
int DocGiaThuong::fee()
{
	return numOfBook * 5000;
}
void DocGiaThuong::inputInfo()
{
	DocGia::inputInfo();
	cout << "Number of books: ";
	cin >> numOfBook;
}
void DocGiaThuong::outputInfo()
{
	DocGia::outputInfo();
	cout << "Number of books: " << numOfBook << endl;
}
DocGiaThuong::DocGiaThuong()
{
	numOfBook = 0;
}
DocGiaThuong::~DocGiaThuong()
{
}
