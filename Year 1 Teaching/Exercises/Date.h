#pragma once
class Date
{
public:
	void SetDate(int d, int m, int y);

	int GetDay();
	int GetMonth();
	int GetYear();


private:
	void InvalidDate();

	int m_day;
	int m_month;
	int m_year;
};

