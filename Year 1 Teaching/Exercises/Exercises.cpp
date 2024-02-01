#include <iostream>
#include <string> //neccesary header for string operation

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

/*
 1.Write a C++ program to implement a class called Circle that has private member variables for radius. 
 Include member functions to calculate the circle's area and circumference.

 2. Write a C++ program to create a class called Rectangle that has private member variables for length and width. 
 Implement member functions to calculate the rectangle's area and perimeter.

 3. Write a C++ program to create a class called Person that has private member variables for name, age and country. 
 Implement member functions to set and get the values of these variables.

 4. Write a C++ program to create a class called Car that has private member variables for company, model, and year. 
 Implement member functions to get and set these variables.

 5. Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. 
 Include member functions to deposit and withdraw money from the account.

 6. Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. 
 Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.

 7. Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary. 
 Include member functions to calculate and set salary based on employee performance.

 8. Write a C++ program to implement a class called Date that has private member variables for day, month, and year. 
 Include member functions to set and get these variables, as well as to validate if the date is valid.

 9. Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks. 
 Include member functions to calculate the grade based on the marks and display the student's information.
*/