#include "Person.h"

void Person::SetName(string s)
{
	m_name = s;
}

string Person::GetName()
{
	return m_name;
}

void Person::SetAge(int i)
{
	if (i > 100)
	{
		m_age = 100;
	}
	else
	{
		m_age = i;
	}
	
}

int Person::GetAge()
{
	return m_age;
}

void Person::SetCountry(string s)
{
	m_country = s;
}

string Person::GetCountry()
{
	return m_country;
}
