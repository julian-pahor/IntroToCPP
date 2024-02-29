// Task4_Demo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Game.h"
#include "Player.h"
#include <iostream>

int main()
{
	Game* myGame = new Game();
	Player* myPlayer = new Player();

	myGame->SetPlayer(myPlayer);


	while (true)
	{
		myGame->Draw();
		myGame->Run();
	}

}

