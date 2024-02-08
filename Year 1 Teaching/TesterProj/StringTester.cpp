#include "StringTester.h"
#include <iostream> //Access to strlen , strcpy, strcat, strcmp


StringTester::StringTester()
{
	m_str = new char[1];
}

StringTester::StringTester(const char* c)
{
	//Dynamically allocating space for this object
	m_str = new char[(strlen(c)) + 1]; //Size of string literal in parameter + 1 for NUL terminator

	strcpy_s(m_str, (strlen(c)) + 1, c); //Copy c char[] into member variable m_str
}

int StringTester::Length()
{
	return strlen(m_str);
}
