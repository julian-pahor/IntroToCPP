#include "test.h"

void Test::ChangePosition(int pos)
{
	if (pos >= 0)
	{
		m_position = pos;
	}
	else
	{
		m_position = 0;
	}
}
