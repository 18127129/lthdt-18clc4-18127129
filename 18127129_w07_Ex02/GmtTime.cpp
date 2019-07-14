#include "GmtTime.h"
string GmtTime::ToString(int gmt)
{
	if (gmt >= 24)
		gmt = gmt % 24;
	else if (gmt <= -24)
		gmt = gmt % 24;
	m_time += gmt * 3600;
	if (m_time < 0)
	{
		m_time += 24 * 3600;
	}
	stringstream writer;
	writer << m_time / 3600 << "h " << m_time % 3600 / 60 << "m " << m_time % 3600 % 60 << "s";
	return writer.str();
}
GmtTime::GmtTime() :Time(){}
GmtTime::GmtTime(int h, int m, int s):Time(h, m, s){}