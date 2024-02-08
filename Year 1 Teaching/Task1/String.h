#pragma once

class String
{
public:

	String(const char* string);
	~String();

	int Length();

	char CharacterAt(int index);

	bool EqualTo(const char* string);

	void Append(const char* string);

	void Prepend(const char* string);

	const char* CStr();

	void ToLower();

	void ToUpper();

	int Find(const char* findString);

	int Find(int startIndex, const char* findString);

	void Replace(const char* findString, const char* replaceString);

	void ReadFromConsole();

	void WriteToConsole();

public:
	char& operator[](int index);

private:

	char* str; 
};

