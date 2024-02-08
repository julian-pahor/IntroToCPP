#pragma once
class Player
{
public:
    Player();
    Player(const char* name);
    Player(int a_max_ammo, int a_max_health);
    Player(float x, float y);
    Player(bool b);
    Player(Player& a_player);

    float X = 0;
    float Y = 0;
    int ammo = 0;
    int max_ammo = 30;
    int health = 100;
    int max_health = 100;
    char name[64];
    

};

