#include "Game.h"
#include "Room.h"
#include "Player.h"
#include "String.h"
#include "BoxOfDonuts.h"
#include "Lamp.h"
#include "Cat.h"
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

	rooms[posY][posX].Description();

	std::cout << "What would you like to do? (move/use <item>/inspect <item>)" << std::endl;

	userInput->ReadFromConsole();

	userInput->ToLower(); //makes user input non case sensitive

	//Logic for Searching through user input;

	switch (userInput->CharacterAt(0))
	{
	case 'm':
		if (userInput->Find("move") != -1)
		{
			if (userInput->Find("north") != -1)
			{
				TryMove('n');
			}
			else if (userInput->Find("south") != -1)
			{
				TryMove('s');
			}
			else if (userInput->Find("east") != -1)
			{
				TryMove('e');
			}
			else if (userInput->Find("west") != -1)
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
			if (userInput->Find("cat") != -1)
			{
				TryUse('c');
			}
			else if (userInput->Find("lamp") != -1)
			{
				TryUse('l');
			}
			else if (userInput->Find("box of donuts") != -1)
			{
				TryUse('b');
			}
			else
			{
				std::cout << "I couldn't figure out what you wanted to use..." << std::endl;
			}
		}
		break;
	case 'i':
		if (userInput->Find("inspect") != -1)
		{
			if (userInput->Find("cat") != -1)
			{
				TryInspect('c');
			}
			else if (userInput->Find("lamp") != -1)
			{
				TryInspect('l');
			}
			else if (userInput->Find("box of donuts") != -1)
			{
				TryInspect('b');
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
	system("cls");

	//Draw entire map system with player current room location
	std::cout << "      ------------------------------------\n\n";

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			std::cout << "| ";
			if (j == posX && i == posY)
			{
				std::cout << " P ";
			}
			else
			{
				std::cout << " O ";
			}
			std::cout << " |";
		}

		std::cout << std::endl;
	}

	std::cout << "\n      ------------------------------------\n\n";

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
		if (posY >= 1)
		{
			posY--;
			std::cout << "You moved to the north-bound room ahead..." << std::endl;
		}
		else
		{
			std::cout << "There was no path you could find to the north..." << std::endl;
		}
		break;
	case 's':
		if (posY <= 3)
		{
			posY++;
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
			std::cout << "There was no path you could find to the east..." << std::endl;
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

void Game::TryUse(char c)
{
	switch (c)
	{
	case 'b':
	{
		BoxOfDonuts* bod = dynamic_cast<BoxOfDonuts*>(rooms[posY][posX].item);
		if (bod != nullptr)
		{
			bod->Use();
		}
		else
		{
			std::cout << "There was nothing like that to use in the room..." << std::endl;
		}
		break;
	}
	case 'c':
	{
		Cat* cat = dynamic_cast<Cat*>(rooms[posY][posX].item);
		if (cat != nullptr)
		{
			cat->Use();
		}
		else
		{
			std::cout << "There was nothing like that to use in the room..." << std::endl;
		}
		break;
	}	
	case 'l':
	{
		Lamp* lamp = dynamic_cast<Lamp*>(rooms[posY][posX].item);
		if (lamp != nullptr)
		{
			lamp->Use();
		}
		else
		{
			std::cout << "There was nothing like that to use in the room..." << std::endl;
		}
		break;
	}
	default:
		std::cout << "There was nothing in the room to use..." << std::endl;
		break;
	}
}

void Game::TryInspect(char c)
{
	switch (c)
	{
	case 'b':
	{
		BoxOfDonuts* bod = dynamic_cast<BoxOfDonuts*>(rooms[posY][posX].item);
		if (bod != nullptr)
		{
			bod->Description();
		}
		else
		{
			std::cout << "There was nothing like that in the room..." << std::endl;
		}
		break;
	}
	case 'c':
	{
		Cat* cat = dynamic_cast<Cat*>(rooms[posY][posX].item);
		if (cat != nullptr)
		{
			cat->Description();
		}
		else
		{
			std::cout << "There was nothing like that in the room..." << std::endl;
		}
		break;
	}
	case 'l':
	{
		Lamp* lamp = dynamic_cast<Lamp*>(rooms[posY][posX].item);
		if (lamp != nullptr)
		{
			lamp->Description();
		}
		else
		{
			std::cout << "There was nothing like that in the room..." << std::endl;
		}
		break;
	}
	default:
		std::cout << "There was nothing in the room to use..." << std::endl;
		break;
	}
}
