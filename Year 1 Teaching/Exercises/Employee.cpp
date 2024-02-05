#include "Employee.h"

void Employee::SetSalary(WorkGrade wg)
{
	switch (wg)
	{
	case WorkGrade::Amazing:
		m_salary = 100000;
		break;

	case WorkGrade::Great:
		m_salary = 80000;
		break;

	case WorkGrade::Good:
		m_salary = 40000;
		break;

	case WorkGrade::Fair:
		m_salary = 20000;
		break;

	case WorkGrade::Poor:
		m_salary = 10;
		break;
	}
}

int Employee::GetSalary()
{
	return m_salary;
}
