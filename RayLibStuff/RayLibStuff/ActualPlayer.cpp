#include "ActualPlayer.h"


ActualPlayer::ActualPlayer()
{
    xPos = 0;
    yPos = 0;
	m_size = 50.f;
	m_speed = 10.f;
    color = PURPLE;

}

ActualPlayer::~ActualPlayer()
{

}

void ActualPlayer::Update()
{
    GetUserInput();
}

void ActualPlayer::Draw()
{
    Vector2 v1{ xPos, yPos - (m_size / 2)};
    Vector2 v2{ xPos - (m_size / 2), yPos + (m_size / 2)};
    Vector2 v3{ xPos + (m_size / 2), yPos + (m_size / 2)};
    DrawTriangle(v1, v2, v3, color);
}

void ActualPlayer::GetUserInput()
{
    if (IsKeyDown(KEY_W))
    {
        yPos -= 1.f * m_speed;
    }
    if (IsKeyDown(KEY_S))
    {
        yPos += 1.f * m_speed;
    }
    if (IsKeyDown(KEY_A))
    {
        xPos -= 1.f * m_speed;
    }
    if (IsKeyDown(KEY_D))
    {
        xPos += 1.f * m_speed;
    } 
}