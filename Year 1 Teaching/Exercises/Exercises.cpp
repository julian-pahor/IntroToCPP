#include <iostream>

////Fibonacci Sequence
//int fibCalc(int index);
//
//int main()
//{
//
//    int a = 0;
//
//    a = fibCalc(15);
//
//    std::cout << a << std::endl;
//
//
//
//}
//
//int fibCalc(int index)
//{
//    int n1 = 0;
//    int n2 = 0;
//    int currentNum = 0;
//
//    for (int i = 0; i < index - 1; i++)
//    {
//        currentNum = n1 + n2;
//
//        if (i == 0)
//        {
//            n2++;
//        }
//        else
//        {
//            n1 = n2;
//            n2 = currentNum;
//        }
//    }
//
//
//    return currentNum;
//}



////Factorial
//int factorial(int n);
//
//int main()
//{
//
//	int i = factorial(5);
//
//	std::cout << i << std::endl;
//
//
//	return 0;
//}
//
//int factorial(int n)
//{
//	int result = n;
//
//
//	for (int i = n - 1; i >= 1; i--)
//	{
//		result *= i;
//	}
//
//
//	return result;
//}


//////Input + Mean
//
//int main()
//{
//	int current = 0;
//	float runningTotal = 0;
//	int runningCount = 0;
//	char currentChar = '.';
//
//	bool inputting = true;
//
//	while (inputting)
//	{
//		std::cout << "Please input an integer to add." << std::endl;
//
//		std::cin >> current;
//
//		if (std::cin.fail()) //failed to enter an integer
//		{
//			std::cin.clear(); //clearing error but not read buffer
//			
//			std::cin >> currentChar;
//
//			if (currentChar == 'q' || currentChar == 'Q') //if user enters letter q or Q
//			{
//				inputting = false;
//			}
//			else
//			{
//				std::cin.clear(); //clear error
//				std::cin.ignore(std::cin.rdbuf()->in_avail()); //clear anything in read buffer
//				std::cout << "Your input was invalid, please try again" << std::endl;
//				continue;
//			}
//		}
//		else
//		{
//			runningTotal += current;
//			runningCount++;
//		}
//	}
//
//	if (runningCount > 0)
//	{
//		std::cout << "Your total number of integer inputs was " << runningCount << std::endl;
//		std::cout << "Your average from the total of all numbers input is " << runningTotal / runningCount << std::endl;
//	}
//	else
//	{
//		std::cout << "You failed to input any numbers, goodbye..." << std::endl;
//	}
//	
//
//	return 0;
//}