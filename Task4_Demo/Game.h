#pragma once

class Room;
class Player;
class String;

class Game
{
public:
	Game();
	~Game();
	void Run();
	void Draw();
	void SetPlayer(Player* p);

	void TryMove(char c);
	void TryUse(char c);
	void TryInspect(char c);

private:
	Room** rooms = nullptr;
	Player* player = nullptr;

	const int rows = 5;
	const int columns = 5;
	String* userInput;

	int posX, posY;
};

