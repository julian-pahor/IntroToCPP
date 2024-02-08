#pragma once
class StringTester
{
public:
	StringTester();
	StringTester(const char* c);
	//StringTester(StringTester& st);
	//~StringTester();

	int Length();

	//char CharacterAt(int index);

	//bool EqualTo(const char* c);
	//bool EqualTo(StringTester* st);

	//void Append(const char* c);
	//void Append(StringTester* st);

	//void Prepend(const char* c);
	//void Prepend(StringTester* st);


private:
	//member data 
	char* m_str;
};