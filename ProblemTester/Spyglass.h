#pragma once
#include "ItemProblem.h"

class Spyglass : public ItemProblem
{
public:
	int uses;
	Spyglass();
	~Spyglass();

	void DoThing() override;
private:

};

