#include "CircleClass.h"

void CircleClass::SetRadius(float rad)
{
	if (rad < 0)
	{
		m_radius = 0;
	}
	else
	{
		m_radius = rad;
	}
}

float CircleClass::GetRadius()
{
	return m_radius;
}
