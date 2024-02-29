#include "Game.h"
#include "Room.h"
#include "Player.h"
#include "String.h"
#include <iostream>

Game::Game()
{
	userInput = new String();
	//Initialising rooms
	rooms = new Room * [rows];

	for (int i = 0; i < columns; i++)
	{
		rooms[i] = new Room[columns];
	}


	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			//Hard Coded to 1 rn
			rooms[i][j].SetUpRoom(((i + j + 20) * (i + 2) % 5) + 1);
		}
	}

	posX = 2;
	posY = 2;
}

Game::~Game()
{
	for (int i = 0; i < columns; i++)
	{
		delete[] rooms[i];
	}

	delete[] rooms;

	delete player;
}

void Game::Run()
{
	//My Key words are move, use, inspect
	//TODO:
	//Query For Input
	//Run Logic on Input
	//Affect Game Accordingly

	std::cout << "What would you like to do? (move/use <item>/inspect <item>)" << std::endl;

	userInput->ReadFromConsole();

	userInput->ToLower(); //makes user input non case sensitive

	//Logic for Searching through user input;

	switch (userInput->CharacterAt(0))
	{
	case 'm':
		if (userInput->Find("move") != -1)
		{
			if (userInput->Find("north") || userInput->Find("n"))
			{
				TryMove('n');
			}
			else if (userInput->Find("south") || userInput->Find("s"))
			{
				TryMove('s');
			}
			else if (userInput->Find("east") || userInput->Find("e"))
			{
				TryMove('e');
			}
			else if (userInput->Find("west") || userInput->Find("w"))
			{
				TryMove('w');
			}
			else
			{
				std::cout << "I couldn't figure out where you wanted to move" << std::endl;
			}
		}
		break;
	case 'u':
		if (userInput->Find("use") != -1)
		{

		}
		break;
	case 'i':
		if (userInput->Find("inspect") != -1)
		{
			if (userInput->Find("cat"))
			{
				//if(rooms[posY][posX].)
			}
			else if (userInput->Find("lamp"))
			{
				
			}
			else if (userInput->Find("box of donuts"))
			{
				
			}
			else
			{
				std::cout << "I couldn't figure out what you wanted to inspect" << std::endl;
			}
		}
		break;
	default:
		std::cout << "Don't quite understand what you wanted to do..." << std::endl;
		break;
	}

	std::cout << "any key to continue..." << std::endl;
	system("pause");

}

void Game::Draw()
{
	//system("cls");

	//Draw entire map system with player current room location
}

void Game::SetPlayer(Player* p)
{
	player = p;
}

void Game::TryMove(char c)
{
	switch (c)
	{
	case 'n':
		if (posY <= 3)
		{
			posY++;
			std::cout << "You moved to the north-bound room ahead..." << std::endl;
		}
		else
		{
			std::cout << "There was no path you could find to the north..." << std::endl;
		}
		break;
	case 's':
		if (posY >= 1)
		{
			posY--;
			std::cout << "You moved to the south-bound room ahead..." << std::endl;
		}
		else
		{
			std::cout << "There was no path you could find to the south..." << std::endl;
		}
		break;
	case 'e':
		if (posX <= 3)
		{
			posX++;
			std::cout << "You moved to the east-bound room ahead..." << std::endl;
		}
		else
		{
			std::cout << "There was no path you could find to the west..." << std::endl;
		}
		break;
	case 'w':
		if (posX >= 1)
		{
			posX--;
			std::cout << "You moved to the west-bound room ahead..." << std::endl;
		}
		else
		{
			std::cout << "There was no path you could find to the west..." << std::endl;
		}
		break;
	}
}
