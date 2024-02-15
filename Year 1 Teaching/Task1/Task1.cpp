// Task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "String.h"

//int main()
//{
//    int total = 0;
//    int count = 0;
//    int number = 1;
//
//    while (count < 15) {
//        total += number;
//        number += 2;
//        count += 1;
//    }
//
//    std::cout << "Total of the first 15 odd numbers is " << total << std::endl;
//
//    return 0;
//}

////Triangle Problem
//int main()
//{
//    ////Looping sum solution
//
//    //int triangleNumb = 10; //Represents which triangle we are trying to calculate
//
//    //int dots = 0;
//
//    //for (int i = 0; i < triangleNumb; i++) //for loop iterates over each line in the triangle and adds to the dot count
//    //{
//    //    dots += i + 1;
//    //}
//
//    //std::cout << "For the " << triangleNumb << "th Triangle, there are " << dots << " number of dots" << std::endl;
//
//
//    //"Better" solution
//
//    int triangleNumb = 10;
//
//    int dots = (triangleNumb * (triangleNumb + 1)) * 0.5f; //Formula for calculating numb of dots
//    //Imagine a second identical triangle to form a rectangle, then simply getting half the area of that rectangle
//
//    std::cout << "For the " << triangleNumb << "th Triangle, there are " << dots << " number of dots" << std::endl;
//
//}
//
//int main()
//{
//    
//
//    int i = 0;
//    bool inputting = true;
//
//    std::cout << "Please write a number between 1-10" << std::endl;
//
//    while (inputting)
//    {
//        std::cin >> i;
//
//        if (std::cin.fail() || i < 1 || i > 10)
//        {
//            system("cls");
//            std::cin.clear();
//            std::cin.ignore(std::cin.rdbuf()->in_avail());
//            std::cout << "Your input was invalid please try again. Please try again." << std::endl;
//        }
//        else
//        {
//            inputting = false;
//        }
//    }
//
//    std::cout << "Well done you passed the test. Your chosen number was " << i << "." << std::endl;
//    
//}

int main()
{
    /*String string = String("HelloWorld");

    std::cout << "Character at Index should be o, Character = " << string.CharacterAt(4) << std::endl;

    std::cout << "String Length should be 10, Length = " << string.Length() << std::endl;

    if (string.EqualTo("HelloWorld"))
    {
        std::cout << "String Compare should be true, Compare =  TRUE" << std::endl;
    }
    else
    {
        std::cout << "String Compare should be true, Compare =  FALSE" << std::endl;
    }

    string.Append("HelloAgain");

    std::cout << "String should be HelloWorldHelloAgain, String = " << string.CStr() << std::endl;

    string.Prepend("StartHello");

    std::cout << "String should be StartHelloHelloWorldHelloAgain, String = " << string.CStr() << std::endl;

    string.ToLower();

    std::cout << "Converting to lowercase: " << string.CStr() << std::endl;

    string.ToUpper();

    std::cout << "Converting to uppercase: " << string.CStr() << std::endl << std::endl << std::endl;

    String string2 = String("abcdefg");

    std::cout << "New String = " << string2.CStr() << std::endl;

    std::cout << "Found index should be 2, Found Index = " << string2.Find("cd") << std::endl;

    std::cout << "Found index should be 4, Found Index = " << string2.Find(2, "efg") << std::endl;

    std::cout << "Found index should be -1, Found Index = " << string2.Find(3, "cd") << std::endl;

    string2.Replace("defg", "XXX");

    string2.WriteToConsole();

    String string3 = String("helloo");


    string3.ReadFromConsole();
    string3.WriteToConsole();

    std::cout << "Hello World!\n";

    for (int i = 0; i < string3.Length(); i++)
    {
        char thisChar = string3[i];
        std::cout << string3[i] << std::endl;
    }*/


   
    String s1("Hello, ");
    String s2("World!");

    String s3;

    s3 = s1 + s2;

    while (true)
    {
        s1 + s2;
    }

    String s4 = s1 + s2;
}
