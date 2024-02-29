#pragma once

#include "String.h"

class ItemProblem
{
	
public:
	String* name;
	String* description;

	virtual void DoThing() = 0;

};

