#pragma once
#include <vector>
#include "String.h"
class String;
class Room;

class Player
{
public:
	Player();

	~Player();

	bool FindSpell(String& spell);
private:
	std::vector<String> spells;

};

