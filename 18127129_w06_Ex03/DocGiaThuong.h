#pragma once
#include "DocGia.h"
class DocGiaThuong : public DocGia
{
private:
	int numOfBook;
public:
	int fee();
	void inputInfo();
	void outputInfo();
	DocGiaThuong();
	~DocGiaThuong();
};

