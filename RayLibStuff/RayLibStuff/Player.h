#pragma once
#include "Object.h"
#include "raylib-cpp.hpp"
class Player : public Object
{
public:
	Player();
	Player(float r, raylib::Color col);
	~Player();

	void Update() override;
	void Draw() override;

private:
	void GetUserInput();


private:
	float rad;
	float speed;
	raylib::Color color;
};

