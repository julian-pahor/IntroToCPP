#include "String.h"
#include <iostream>

String::String()
{
	str = new char[5]{ "Hi" };
}

String::String(const char* string)
{
	str = new char[strlen(string) + 1]; //+1 for NUL

	strcpy_s(str, strlen(string) + 1, string);
}

String::String(const String& other)
{
	str = new char[strlen(other.str) + 1];
	strcpy_s(str, strlen(other.str) + 1, other.str);

}

String::~String()
{
	delete[] str;
}

int String::Length() const
{
	return strlen(str);
}

char String::CharacterAt(int index)
{
	if (index < 0 || index > Length())
	{
		return '\0';
	}
	else
	{
		return str[index];
	}
}

bool String::EqualTo(const char* string)
{
	return strcmp(str, string) == 0 ? true : false;
}

void String::Append(const char* string)
{
	int newLength = Length() + strlen(string) + 1;
	char* temp = new char[newLength];
	strcpy_s(temp, newLength, str);
	strcat_s(temp, newLength, string);
	delete[] str;

	str = new char[newLength];

	strcpy_s(str, newLength, temp);

	delete[] temp;
}

void String::Prepend(const char* string)
{
	int newLength = Length() + strlen(string) + 1;
	char* temp = new char[newLength];
	strcpy_s(temp, newLength, string);
	strcat_s(temp, newLength, str);
	delete[] str;

	str = new char[newLength];

	strcpy_s(str, newLength, temp);

	delete[] temp;
}

const char* String::CStr()
{
	return str;
}

void String::ToLower()
{
	for (int i = 0; i < Length(); i++)
	{
		str[i] = tolower(str[i]);
	}
}

void String::ToUpper()
{
	for (int i = 0; i < Length(); i++)
	{
		str[i] = toupper(str[i]);
	}
}

//Not sure if the found stuff is correct need to double check

int String::Find(const char* findString)
{
	//Loop through string to find matching string inside of it
	int searchLength = strlen(findString);

	for (int i = 0; i <= Length() - searchLength; i++)
	{
		bool found = true;

		for (int j = 0; j < searchLength; j++)
		{
			if (str[i + j] != findString[j])
			{
				found = false;
			}
		}

		if (found)
		{
			return i; //returns index where found string was
		}
	}

	return -1;
}


//
//int String::Find(const char* findString)
//{
//	if (strlen(findString) > Length())
//	{
//		return -1;
//	}
//
//	for (int i = 0; i < Length() - strlen(findString); i++)
//	{
//		if (CompareAt(i, findString))
//		{
//			return i;
//		}
//		else
//		{
//
//		}
//	}
//
//	return -1;
//}

int String::Find(const String& other)
{
	if (strlen(other.str) > Length())
	{
		return -1;
	}

	for (int i = 0; i < Length() - strlen(other.str); i++)
	{
		if (CompareAt(i, other.str))
		{
			return i;
		}
		else
		{

		}
	}

	return -1;
}

bool String::CompareAt(int index, const char* findString)
{
	for (int i = 0; i < strlen(findString); i++)
	{
		if (str[index + i] != findString[i])
		{
			return false;
		}
	}

	return true;
}


















int String::Find(int startIndex, const char* findString)
{
	int searchLength = strlen(findString);

	for (int i = startIndex; i <= Length() - searchLength; i++)
	{
		bool found = true;

		for (int j = 0; j < searchLength; j++)
		{
			if (!(str[i + j] == findString[j]))
			{
				found = false;
			}
		}

		if (found)
		{
			return i;
		}
	}

	return -1;
}

void String::Replace(const char* findString, const char* replaceString)
{
	int startIndex = Find(findString);

	if (startIndex == -1)
	{
		return; //string not found
	}

	if (strlen(findString) == strlen(replaceString)) //easiet case
	{
		for (int i = 0; i < strlen(replaceString); i++)
		{
			str[startIndex + i] = replaceString[i];
		}
	}
	else
	{
		int newLength = Length() + (strlen(replaceString) - strlen(findString)) + 1;
		char* temp = new char[newLength];
		int buffer = 0;
		bool replaceFlag = false;
		
		for (int i = 0; i < newLength; i++)
		{
			
			if (i < startIndex)
			{
				temp[i] = str[i];
			}
			else
			{
				if (buffer < strlen(replaceString))
				{
					temp[i] = replaceString[buffer];
					buffer++;
				}
				else
				{
					temp[i] = str[i - (strlen(replaceString) - strlen(findString))];
				}
			}
		}


		delete[] str;

		str = new char[newLength];

		strcpy_s(str, newLength, temp);

		delete[] temp;
	}
}

void String::ReadFromConsole()
{
	std::cin.clear();

	std::cin.ignore(std::cin.rdbuf()->in_avail());

	delete[] str;

	str = new char[50]; //Defaulting to a buffer of 30

	//std::cout << "Please enter your string (End with ENTER KEY)" << std::endl;

	std::cin.get(str, 50, '\n');
}

void String::WriteToConsole()
{
	std::cout << str << std::endl;
}

char& String::operator[](int index)
{
	return str[index];
}

String String::operator+(const String& other) const 
{
	// Concatenate the data of both instances
	char* newData = new char[strlen(str) + strlen(other.str) + 1];
	strcpy_s(newData, strlen(str) + strlen(other.str) + 1,  str);
	strcat_s(newData, strlen(str) + strlen(other.str) + 1, other.str);

	// Create a new instance with the concatenated data
	String result(newData);

	delete[] newData;

	return result;
}

String& String::operator=(const String& other)
{
	delete[] str;

	str = new char[strlen(other.str) + 1];

	strcpy_s(str, strlen(other.str) + 1, other.str);

	return *this;
}
