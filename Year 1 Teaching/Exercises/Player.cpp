#include "Player.h"

Player::Player()
{
	X = 0;
	Y = 0;
	ammo = 0;
	max_ammo = 30;
	health = 100;
	max_health = 100;
}

Player::Player(const char* name)
{

}

Player::Player(int a_max_ammo, int a_max_health)
{
	X = 0;
	Y = 0;
	ammo = 0;
	max_ammo = a_max_ammo;
	health = 100;
	max_health = a_max_health;
}

Player::Player(float x, float y)
{
	X = x;
	Y = y;

}

Player::Player(bool b)
{
	if(b)
	{

	}
	else
	{

	}
}

Player::Player(Player& a_player)
{
	X = a_player.X;
	Y = a_player.Y;
	ammo = 0;
	max_ammo = 30;
	health = 100;
	max_health = 10;
}
