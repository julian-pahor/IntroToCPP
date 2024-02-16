#include "Player.h"

Player::Player()
{
    xPos = ((rand() % GetScreenWidth()) + (rand() % GetScreenWidth()) / 2.f);
    yPos = ((rand() % GetScreenHeight()) + (rand() % GetScreenHeight()) / 2.f);
    speed = (((rand() % 100) + (rand() % 100)) * 5) / 10;
	rad = 100.0f;
	color = RED;
}


Player::Player(float r, raylib::Color col)
{
    xPos = ((rand() % GetScreenWidth()) + (rand() % GetScreenWidth()) / 2.f);
    yPos = ((rand() % GetScreenHeight()) + (rand() % GetScreenHeight()) / 2.f);
    speed = rand() % 15;
	rad = r;
	color = col;
}

Player::~Player()
{

}

void Player::Update()
{
    GetUserInput();
    yPos -= 1.f * speed;
    xPos += 1.f * speed;

    if(xPos > GetScreenWidth())
    {
        xPos = 0;
    }
    if (xPos < 0)
    {
        xPos = GetScreenWidth();
    }

    if (yPos < 0)
    {
        yPos = GetScreenHeight();
    }
    if (yPos > GetScreenHeight())
    {
        yPos = 0;
    }

}

void Player::Draw()
{
    DrawCircle(xPos, yPos, rad, color);
}

void Player::GetUserInput()
{
    rad += GetMouseWheelMove() * -2.0f;
}
