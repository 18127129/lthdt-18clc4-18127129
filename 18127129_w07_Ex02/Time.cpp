#include "Time.h"
Time::Time()
{
	time_t now = time(0);
	tm local;
	localtime_s(&local, &now);
	m_time = local.tm_hour * 3600 + local.tm_min * 60 + local.tm_sec;
}
Time::Time(int h, int m, int s)
{
	m_time = h * 3600 + m * 60 + s;
	m_time = m_time % (24 * 3600);
}
