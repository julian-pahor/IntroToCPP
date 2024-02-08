#pragma once

/*
RULES FOR MY SECRET CODE:
1 - VALUES MUST BE POSITIVE
2 - VALUE AFTER END OF CODE = -1 (Serves as my foe NULL TERMINATOR)
*/

class SecretCode
{
public: //Constructors + Destructor
	SecretCode(); //Default Constructor
	SecretCode(const int* incomingInt); //Constructor that accepts an int array
	SecretCode(const SecretCode& _otherCode); //Copy Constructor
	~SecretCode(); //Destructor

public: //Member Functions
	size_t Length() const; //const keyword to delcare this as a read only function
	
	int ValueAtIndex(const size_t index); //If outside length return -1

	SecretCode& Append(const SecretCode* otherCode);
	SecretCode& Prepend(const SecretCode* otherCode);

	//SecretCode& ReadFromConsole();
	SecretCode& WriteToConsole();

public: //Operator Overloads
	bool operator==(const SecretCode& otherCode);
	bool operator!=(const SecretCode& otherCode);

	SecretCode& operator=(const SecretCode& otherCode);

	int operator[](size_t index);

private:

	int* m_code;
};

