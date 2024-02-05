#pragma once
#include <string>
using namespace std;



class Employee
{
public:

	enum class WorkGrade
	{
		Amazing,
		Great,
		Good,
		Fair,
		Poor
	};


	void SetSalary(WorkGrade wg);
	int GetSalary();


private:
	string m_name;
	int m_ID;
	int m_salary;
};

