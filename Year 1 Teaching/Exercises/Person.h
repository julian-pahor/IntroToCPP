#pragma once
#include <string>

using namespace std;

class Person
{
public:
	void SetName(string s);
	string GetName();

	void SetAge(int i);
	int GetAge();

	void SetCountry(string s);
	string GetCountry();

private:
	string m_name;
	int m_age;
	string m_country;
};

