#include "Spyglass.h"

Spyglass::Spyglass()
{
	this->name = new String("This is my name");
	this->description = new String("This is my description");
	this->uses = 3;
}

Spyglass::~Spyglass()
{
	delete name;
	delete description;
}

void Spyglass::DoThing()
{
}
