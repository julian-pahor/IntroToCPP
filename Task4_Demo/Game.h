#pragma once

class Room;
class Player;

class Game
{
public:
	Game();
	~Game();
	void Run();

private:
	Room** rooms;
	Player* player;

};

