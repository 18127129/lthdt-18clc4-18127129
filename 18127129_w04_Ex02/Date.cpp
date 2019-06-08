#include "Date.h"
Date Date::Yesterday()
{
	Date x = *this;
	if (dd == 1)
	{
		x.dd = 30;
		if (x.mm == 1)
		{
			x.mm = 12;
			x.yy--;
		}
		else
			x.mm--;
	}
	else
		x.dd--;
	return x;
}
Date Date::Tomorrow()
{
	Date x = *this;
	if (x.dd == 30)
	{
		x.dd = 1;
		if (x.mm == 12)
		{
			x.mm = 1;
			x.yy++;
		}
		else
			x.mm++;
	}
	else
		x.dd++;
	return x;
}
bool Date::operator ==(Date x)
{
	return dd == x.dd && mm == x.mm && yy == x.yy;
}
bool Date::operator !=(Date x)
{
	return dd != x.dd || mm != x.mm || yy != x.yy;
}
bool Date::operator >=(Date x)
{
	return (yy + mm * 1.0 / 12 + dd * 1.0 / 365) >= (x.yy + x.mm * 1.0 / 12 + x.dd * 1.0 / 365);
}
bool Date::operator <=(Date x)
{
	return (yy + mm * 1.0 / 12 + dd * 1.0 / 365) <= (x.yy + x.mm * 1.0 / 12 + x.dd * 1.0 / 365);

}
bool Date::operator >(Date x)
{
	return (yy + mm * 1.0 / 12 + dd * 1.0 / 365) > (x.yy + x.mm * 1.0 / 12 + x.dd * 1.0 / 365);

}
bool Date::operator <(Date x)
{
	return (yy + mm * 1.0 / 12 + dd * 1.0 / 365) < (x.yy + x.mm * 1.0 / 12 + x.dd * 1.0 / 365);

}
Date& Date::operator =(const Date& x)
{
	dd = x.dd;
	mm = x.mm;
	yy = x.yy;
	return *this;
}
Date Date::operator +(int x)
{
	Date p = *this;
	p.dd += x;
	if (p.dd > 30)
	{
		dd = dd % 30;
		mm += dd / 30;
		if (mm > 12)
		{
			mm = mm % 12;
			yy += mm / 12;
		}
	}
	return p;
}
Date Date::operator -(int x)
{
	Date p = *this;
	long value = p.yy * 365 + p.mm * 30 + p.dd - x;
	p.yy = value / 365;
	value = value % 365;
	p.mm = value / 30;
	p.dd = value % 30;
	if (p.dd == 0)
	{
		p.dd = 30;
		p.mm--;
	}
	if (p.mm == 0)
	{
		p.mm = 12;
		p.yy--;
	}
	return p;
}
Date& Date::operator += (int x)
{

	dd += x;
	if (dd > 30)
	{
		dd = dd % 30;
		mm += dd / 30;
		if (mm > 12)
		{
			mm = mm % 12;
			yy += mm / 12;
		}
	}
	return *this;
}
Date& Date::operator -= (int x)
{
	long value = yy * 365 + mm * 30 + dd - x;
	yy = value / 365;
	value = value % 365;
	mm = value / 30;
	dd = value % 30;
	if (dd == 0)
	{
		dd = 30;
		mm--;
	}
	if (mm == 0)
	{
		mm = 12;
		yy--;
	}
	return *this;
}
Date& Date::operator ++()
{
	if (dd == 30)
	{
		dd = 1;
		if (mm == 12)
		{
			mm = 1;
			yy++;
		}
		else
			mm++;
	}
	else
		dd++;
	return *this;
}
Date Date::operator ++(int x)
{
	Date p = *this;
	if (dd == 30)
	{
		dd = 1;
		if (mm == 12)
		{
			mm = 1;
			yy++;
		}
		else
			mm++;
	}
	else
		dd++;
	return p;
}
Date& Date::operator --()
{
	if (dd == 1)
	{
		dd = 30;
		if (mm == 1)
		{
			mm = 12;
			yy--;
		}
		else
			mm--;
	}
	else
		dd--;
	return *this;
}
Date Date::operator --(int x)
{
	Date p = *this;
	if (dd == 1)
	{
		dd = 30;
		if (mm == 1)
		{
			mm = 12;
			yy--;
		}
		else
			mm--;
	}
	else
		dd--;
	return p;
}
ostream& operator <<(ostream& os, const Date& x)
{
	os << x.dd << "/" << x.mm << "/" << x.yy << endl;
	return os;
}
istream& operator >>(istream& is, Date& x)
{
	cout << "day: ";
	cin >> x.dd;
	cout << "month: ";
	cin >> x.mm;
	cout << "year: ";
	cin >> x.yy;
	return is;
}
Date::operator int()
{
	return (dd - 1) + (mm - 1) * 30 + (yy - 2012) * 365;
}
Date::operator long()
{
	return (dd - 1) + (mm - 1) * 30 + (yy - 1) * 365;
}

Date::Date()
{
	dd = 2;
	mm = 11;
	yy = 2012;
}

Date::Date(int year)
{
	dd = 1;
	mm = 1;
	yy = year;
}
Date::Date(int year, int month)
{
	yy = year;
	mm = month;
	dd = 1;
}
Date::Date(int year, int month, int day)
{
	yy = year;
	mm = month;
	dd = day;
}
Date::Date(const Date& x)
{
	dd = x.dd;
	mm = x.mm;
	yy = x.yy;
}
Date::~Date()
{
}
