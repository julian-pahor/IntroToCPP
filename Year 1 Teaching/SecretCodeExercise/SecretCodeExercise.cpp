#include <iostream>
#include "SecretCode.h"

int main()
{
    int code2array[6] = { 5, 4, 3, 2, 1, -1 };
    SecretCode code1; //Default constructor called
    code1.WriteToConsole();
    SecretCode code2(&code2array[0]); //const int* constructor is called
    code2.WriteToConsole();

    code1.Append(&code2);

    code1.WriteToConsole();

    code1.Prepend(&code2);

    code1.WriteToConsole();

    SecretCode code3(code1);

    code3.WriteToConsole();

    if (code1 != code2)
    {
        std::cout << "It was true!" << std::endl;
    }
    else
    {
        std::cout << "It was false!" << std::endl;
    }

    std::cout << code1[50] << std::endl;

    code1 = code2;

    code1.WriteToConsole();

    SecretCode code4;

    code4 = code1;

    code4.WriteToConsole();

}


