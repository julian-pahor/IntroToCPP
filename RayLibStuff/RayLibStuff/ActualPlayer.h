#pragma once
#include "Object.h"
#include <raylib-cpp.hpp>

class ActualPlayer : public Object
{
public:
	ActualPlayer();
	~ActualPlayer();

	void Update() override;
	void Draw() override;

private:
	void GetUserInput();

private:
	float m_size;
	float m_speed;

	raylib::Color color;
};

