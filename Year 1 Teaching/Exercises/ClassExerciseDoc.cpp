#include <iostream>

////TriangleNumber
//int triNum(int n);
//
//int main()
//{
//	//Tri-Numb 5 = 15
//
//	int dotTotal = 0;
//
//
//	dotTotal = triNum(5);
//
//	std::cout << dotTotal << std::endl;
//
//	return 0;
//}
//
//int triNum(int n)
//{
//	return ((n * (n + 1) * 0.5f));
//}


////Celsius to Far
//
//float CtoF(float c);
//
//int main()
//{
//	float far = 0;
//	
//	far = CtoF(25.f);
//
//	std::cout << far << std::endl;
//}
//
//float CtoF(float c)
//{
//	return (c * 1.8f) + 32;
//}


////Area of a Rectangle
//
//int AreaOfRec(int height, int width);
//
//int main()
//{
//	int area = 0;
//
//	area = AreaOfRec(8, 3);
//
//	std::cout << area << std::endl;
//
//	return 0;
//}
//
//int AreaOfRec(int height, int width)
//{
//	return height * width;
//}

//Area of Rectangle

//float Average(float f1, float f2, float f3, float f4, float f5);
//
//int main()
//{
//	float avg = 0;
//
//	avg = Average(14.f, 29.f, 153.f, 2.f, 19.465f);
//
//	std::cout << avg << std::endl;
//
//	return 0;
//}
//
//float Average(float f1, float f2, float f3, float f4, float f5)
//{
//	return ((f1 + f2 + f3 + f4 + f5) / 5.f);
//}

////Fibonacci Sequence (0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, .....)
//int FibIndex(int index);
//
//int main()
//{
//	int fibNumber = 0;
//
//	fibNumber = FibIndex(8);
//
//	std::cout << fibNumber << std::endl;
//
//	return 0;
//}
//
//int FibIndex(int index)
//{
//	int n1 = 0;
//	int n2 = 0;
//	int currentNum = 0;
//
//	for (int i = 0; i < index - 1; i++)
//	{
//		currentNum = n1 + n2;
//
//		if (i == 0)
//		{
//			n2++;
//		}
//		else
//		{
//
//			n1 = n2;
//			n2 = currentNum;
//		}
//	}
//
//
//	return currentNum;
//}


////Factorial
//
//int Factorial(int n);
//
//int main()
//{
//	// Factorial !5 = 120
//
//	int result = 0;
//
//	result = Factorial(5);
//
//	std::cout << result << std::endl;
//
//	return 0;
//}
//
////5! = 5 * 4 * 3 * 2 * 1 (n * (n-1) * (n-2) * (n-3) * 1)
//int Factorial(int n)
//{
//	int temp = n;
//
//	for (int i = n - 1; i >= 1; i--)
//	{
//		temp *= i; //temp = temp * i
//	}
//
//	return temp;
//}



////input + mean
////write a loop that continually accepts integer inputs from the user until they press 'q/q'.
////then print the total of all integers input and their average value.
//
//int main()
//{
//	int current = 0;
//	float runningtotal = 0;
//	int runningcount = 0;
//	char currentchar = '.';
//
//	bool inputting = true;
//
//	while (inputting)
//	{
//		std::cout << "please input an integer to add to the running total" << std::endl;
//
//		std::cin >> current;
//
//		if (std::cin.fail()) //if user doesn't input an integer
//		{
//			std::cin.clear();
//			
//			std::cin >> currentchar;
//			
//			if (currentchar == 'q' || currentchar == 'Q') //logic if user has entered q/q
//			{
//				inputting = false;
//			}
//			else
//			{
//				std::cin.clear();
//				std::cin.ignore(std::cin.rdbuf()->in_avail());
//				std::cout << "your input was invalid, please try again" << std::endl;
//				continue;
//			}
//		}
//		else
//		{
//			runningtotal += current;
//			runningcount++;
//		}
//	}
//
//	if (runningcount > 0)
//	{
//		std::cout << "your total value of integers input was " << runningtotal << std::endl;
//
//		std::cout << "total number of integers input was " << runningcount << std::endl;
//
//		std::cout << "your average from the total of all numbers input was " << runningtotal / runningcount << std::endl;
//	}
//	else
//	{
//		std::cout << "you failed to input anything useful, goodbye...." << std::endl;
//	}
//	
//
//	return 0;
//}
//
// ---- EXERCISES ON CLASSES -----
//#include "Circle.h"
//#include "Person.h"
//#include "Employee.h"
//#include "Date.h"
//#include "Player.h"
//#include <string>
//
//
//int main()
//{
//	Player player1;
//	const int MAX_ARRAY_SIZE = 5;
//	int intArray[MAX_ARRAY_SIZE];
//
//	std::cout << "Player 1 " << player1.X << " " << player1.Y << std::endl;
//
//	Person p;
//	Person p2;
//	Person p3;
//
//	p.SetAge(20);
//	p.SetName("Person 1");
//	p.SetCountry("Place 1");
//
//	p2.SetAge(200);
//	p2.SetName("Person 2");
//	p2.SetCountry("Place 2");
//
//	p3.SetAge(20);
//	p3.SetName("Person 3");
//	p3.SetCountry("Place 3");
//
//	std::cout << p.GetName() << " is from " << p.GetCountry() << " and is " << p.GetAge() << " years old." << std::endl;
//	std::cout << p2.GetName() << " is from " << p2.GetCountry() << " and is " << p2.GetAge() << " years old." << std::endl;
//	std::cout << p3.GetName() << " is from " << p3.GetCountry() << " and is " << p3.GetAge() << " years old." << std::endl;
//
//	Employee jeff;
//	Employee geff;
//	Employee zeff;
//	jeff.SetSalary(Employee::WorkGrade::Amazing);
//	geff.SetSalary(Employee::WorkGrade::Poor);
//	zeff.SetSalary(Employee::WorkGrade::Fair);
//	std::cout << "Jeff's performance based salary is: " << jeff.GetSalary() << std::endl;
//	std::cout << "Geff's performance based salary is: " << geff.GetSalary() << std::endl;
//	std::cout << "Zeff's performance based salary is: " << zeff.GetSalary() << std::endl;
//
//	Date date;
//	Date date2;
//
//	date.SetDate(18, 12, 2015);
//	date2.SetDate(29, 2, 2020); //Should be Invalid
//	
//	std::cout << "Date 1 is set to " << "Day: " << date.GetDay() << " Month: " << date.GetMonth() << " Year: " << date.GetYear() << std::endl;
//	std::cout << "Date 2 is set to " << "Day: " << date2.GetDay() << " Month: " << date2.GetMonth() << " Year: " << date2.GetYear() << std::endl;
//
//	return 0;
//}

//class TileMap
//{
//public:
//    struct Tile { int x, y; int tile_value; };
//
//    TileMap(int a_width, int a_height)
//    {
//        width = a_width;
//        height = a_height;
//
//        tiles = new Tile* [height]; //Create an array that can hold Tile arrays
//
//        for (int row_index = 0; row_index < height; ++row_index)
//        {
//            tiles[row_index] = new Tile[width]; //Creatin tile arrays for each space in "tiles"
//        }
//    }
//    ~TileMap()
//    {
//        for (int i = 0; i < height; ++i)
//        {
//            delete[] tiles[i];
//        }
//
//        delete[] tiles;
//    }
//        // implement this
//
//    int width;
//    int height;
//    Tile** tiles;
//};
//
//#include <string>
//#include <cstdlib> //used for std::rand();
//int main()
//{
//    ////3x3 -- Exercise 6 Arrays
//    //int intArray[3][3]; 
//
//    //for (int i = 0; i < 3; i++) //rows
//    //{
//    //    for (int j = 0; j < 3; j++) //columns
//    //    {
//    //        intArray[i][j] = j + (i * 3) + 1;
//    //    }
//    //}
//
//    //for (int i = 0; i < 3; i++) //rows 
//    //{
//    //    for (int j = 0; j < 3; j++) //columns
//    //    {
//    //        std::cout << "|" << intArray[i][j] << "|";
//    //    }
//    //    std::cout << std::endl;
//    //}
//
//    ////DAYS
//    //int days[29][5];
//    //
//    ////fill values
//    //for (int i = 0; i < 29; i++) //rows
//    //{
//    //    for (int j = 0; j < 5; j++) //columns
//    //    {
//    //        days[i][j] = (std::rand() % 50) + 1; //Weighted random values of 1-50
//    //    }
//    //}
//
//    ////show values
//    //for (int i = 0; i < 29; i++) //rows 
//    //{
//    //    for (int j = 0; j < 5; j++) //columns
//    //    {
//    //        std::cout << "|" << days[i][j] << "|";
//    //    }
//    //    std::cout << std::endl;
//    //}
//
//    //int rowValue = 0;
//    ////show row sums
//    //for (int i = 0; i < 29; i++) //rows 
//    //{
//    //    for (int j = 0; j < 5; j++) //columns
//    //    {
//    //        rowValue += days[i][j];
//    //    }
//    //    std::cout << "Row " << i << " has the sum of " << rowValue << std::endl;
//    //    rowValue = 0;
//    //}
//
//    //int columnValue = 0;
//    ////show column sums
//    //for (int i = 0; i < 5; i++)
//    //{
//    //    for (int j = 0; j < 29; j++)
//    //    {
//    //        columnValue += days[j][i];
//    //    }
//
//    //    std::cout << "Column " << i << " has the sum of " << columnValue << std::endl;
//    //    columnValue = 0;
//    //}
//
//    
//}

//#include "Player.h"
//#include <iostream>
//int main()
//{
//	//Player player;
//	//Player player2(30, 100, 20, 200, 20, 50, "Bill");
//	Player p1(100, 100);  //a
//	Player p2(25.f, 16.f); //b
//	Player p3(p1); //c
//	Player p4("Jerry"); //d
//	Player p5; //e
//}
//
//
//
//
//
//
//#include <iostream>
//
//int main()
//{
//	const int NUMBERS_LENGTH = 5;
//	int numbers[NUMBERS_LENGTH] = { 2, 4, 5, 8, 10 };
//
//
//	std::cout << numbers << std::endl;
//
//	for (int iteration : numbers)
//	{
//		std::cout << " |" << iteration << "| ";
//	}
//
//}
//

#include <iostream>
int main()
{
	char c = ' ';
	int i = c;

	std::cout << "- value: " << i << std::endl;
    
}

























//Exercises on Arrays


//*++ptr: Increment the pointerand get the value at the new location.
//++* ptr : Increment the value at the current locationand assign it.
//* ptr++ : Get the value at the current locationand then increment the pointer.
//* ptr : Get the value at the current location without modifying the pointer.