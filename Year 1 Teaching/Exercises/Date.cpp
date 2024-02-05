#include "Date.h"

void Date::SetDate(int d, int m, int y)
{ 
	//If date is invalid in anyway all values will default to -1
	//Does not account for leap years
	if (y > 2024 || (d < 1 || d > 31) || (m < 1 || m > 12)) //Check if anything is outside of standard boundary
	{
		InvalidDate();
		return;
	}
	else
	{
		m_year = y;
	}

	if (m == 2) //Specific case for Feb Dates
	{
		if (d > 28)
		{
			InvalidDate();
			return;
		}
		else
		{
			m_month = m;
			m_day = d;
			return;
		}
	}
	else if (m == 4 || m == 6 || m == 9 || m == 11) //30 Day Month Cases
	{
		if (d > 30)
		{
			InvalidDate();
			return;
		}
		else
		{
			m_month = m;
			m_day = d;
			return;
		}
	}
	else
	{
		m_month = m;
		m_day = d;
	}
}

int Date::GetDay()
{
	return m_day;
}

int Date::GetMonth()
{
	return m_month;
}

int Date::GetYear()
{
	return m_year;
}

void Date::InvalidDate()
{
	m_day = -1;
	m_month = -1;
	m_year = -1;
}
