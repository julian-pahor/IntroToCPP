#include <iostream>

char bondType;
double resistance;
extern char choice;

double roi()
{
	extern long date;
	extern double factor;

	std::cout << date << std::endl;
	std::wcout << factor << std::endl;
	return 0;
}
double average()
{
	extern int flag;
	extern long date;

	std::cout << flag << std::endl;
	std::wcout << date << std::endl;

	return 0;
}
double variance()
{
	extern long date;

	return 0;
}