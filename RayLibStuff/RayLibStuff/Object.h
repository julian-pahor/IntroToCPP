#pragma once
class Object
{
public:
	virtual void Update() = 0;
	virtual void Draw() = 0;


protected:
	float xPos;
	float yPos;
};

