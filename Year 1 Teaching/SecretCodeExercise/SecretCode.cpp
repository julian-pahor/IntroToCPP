#include "SecretCode.h"
#include <iostream>

SecretCode::SecretCode() //Default State for a SecretCode object to initialise as
{
	//Code will always initialise as 1,2,3,4,5 as a default
	m_code = new int[6];

	for (int i = 0; i < 6; i++)
	{
		if (i == 5) //Time to write my foe null terminator
		{
			m_code[i] = -1;
		}
		else
		{
			m_code[i] = i + 1;
		}
	}
}

SecretCode::SecretCode(const int* incomingInt)
{
	int indexer = 0;

	while (incomingInt[indexer] != -1)
	{
		indexer++;

		if (indexer >= 20) //hard limit of 20 if an invalid int* is given
		{
			break;
		}
	}

	m_code = new int[indexer + 1]; //allocate new space size of the incoming int* + 1(for foe terminator)

	for (int i = 0; i <= indexer; i++)
	{
		if (i == indexer)
		{
			m_code[i] = -1;
		}
		else
		{
			m_code[i] = incomingInt[i];
		}
	 
	}
}

SecretCode::SecretCode(const SecretCode& _otherCode)
{
	m_code = new int[_otherCode.Length() + 1];

	for (int i = 0; i <= _otherCode.Length(); i++)
	{
		if (i == _otherCode.Length())
		{
			m_code[i] = -1;
		}
		else
		{
			m_code[i] = _otherCode.m_code[i];
		}
	}
}

SecretCode::~SecretCode()
{
	delete[] m_code;
}

size_t SecretCode::Length() const
{
	int indexer = 0;

	while (m_code[indexer] != -1)
	{
		indexer++;
	}

	return indexer;;
}

int SecretCode::ValueAtIndex(const size_t index)
{
	if (index > Length() || index < 0)
	{
		return -1;
	}
	else
	{
		return m_code[index];
	}
}

SecretCode& SecretCode::Append(const SecretCode* otherCode)
{
	//Create new space required 
	int* newArrayToFill = new int[Length() + otherCode->Length() + 1];

	//Doing the job of strcpy
	for (int i = 0; i < Length(); i++)
	{
		newArrayToFill[i] = m_code[i]; //Fill start of new array with data from THIS object
	}

	//Doing the job of strcat
	for (int i = 0; i <= otherCode->Length(); i++)
	{
		if (i == otherCode->Length())
		{
			newArrayToFill[i + Length()] = -1;
		}
		else
		{
			newArrayToFill[i + Length()] = otherCode->m_code[i];
		}
	}

	delete[] m_code; //Current data is our old code we just appended to 

	//Since we still want this objects data pointer to point to relevant data
	//We reassign it to point to where we just created that appended code
	m_code = newArrayToFill; 

	return *this;
}

SecretCode& SecretCode::Prepend(const SecretCode* otherCode)
{
	//Create new space required 
	int* newArrayToFill = new int[Length() + otherCode->Length() + 1];

	//Doing the job of strcpy
	for (int i = 0; i < otherCode->Length(); i++)
	{
		newArrayToFill[i] = otherCode->m_code[i]; //Fill start of new array with data from THIS object
	}

	//Doing the job of strcat
	for (int i = 0; i <= Length(); i++)
	{
		if (i == Length())
		{
			newArrayToFill[i + otherCode->Length()] = -1;
		}
		else
		{
			newArrayToFill[i + otherCode->Length()] = m_code[i];
		}
	}

	delete[] m_code; //Current data is our old code we just appended to 

	//Since we still want this objects data pointer to point to relevant data
	//We reassign it to point to where we just created that appended code
	m_code = newArrayToFill;

	return *this;
}

//SecretCode& SecretCode::ReadFromConsole()
//{
//	return *this;
//}

SecretCode& SecretCode::WriteToConsole()
{
	std::cout << std::endl;

	for (int i = 0; i < Length(); i++)
	{
		std::cout << "| " << m_code[i] << " | ";
	}

	std::cout << std::endl;
	return *this;
}

bool SecretCode::operator==(const SecretCode& otherCode)
{
	//Quick Check - If lengths aren't equal the codes cannot match
	if (Length() != otherCode.Length())
	{
		return false;
	}

	bool b = true;

	for (int i = 0; i < Length(); i++)
	{
		if (m_code[i] != otherCode.m_code[i])
		{
			b = false;
			break;
		}
	}

	return b;
}

bool SecretCode::operator!=(const SecretCode& otherCode)
{
	//Quick Check - If lengths aren't equal the codes cannot match
	if (Length() != otherCode.Length())
	{
		return true;
	}

	bool b = true;

	for (int i = 0; i < Length(); i++)
	{
		if (m_code[i] == otherCode.m_code[i])
		{
			b = false;
			break;
		}
	}

	return b;
}

SecretCode& SecretCode::operator=(const SecretCode& otherCode)
{
	delete[] m_code;

	m_code = new int[otherCode.Length() + 1];

	for (int i = 0; i <= otherCode.Length(); i++)
	{
		if (i == otherCode.Length())
		{
			m_code[i] = -1;
		}
		else
		{
			m_code[i] = otherCode.m_code[i];
		}
	}

	return *this;
}

int SecretCode::operator[](size_t index)
{
	return m_code[index];
}
