#pragma once
#include <vector>
class String;

class Player
{
public:
	Player();
	~Player();
	bool FindSpell(String& spell);

private:
	std::vector<String> spells;
};

