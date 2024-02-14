#pragma once

class String
{
public:

	String();
	String(const char* string);
	String(const String& other);
	~String();

	int Length() const;

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

	char& operator[](int index);

	public:
		String operator+(const String& other) const;

		String& operator=(const String& other);



private:

	char* str; 
};

