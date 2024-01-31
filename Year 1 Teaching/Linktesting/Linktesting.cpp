#include <iostream>


int main()
{
    String string = String("HelloWorld");

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
}
