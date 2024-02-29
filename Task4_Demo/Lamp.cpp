#include "Lamp.h"

void Lamp::Description() const
{
	std::cout << "You recognise the lamp as the iconic ILEA - Arstid table lamp!" << std::endl;
}

void Lamp::Use()
{
	std::cout << "The lamp is not plugged in, nothing happens, you end up laying in the darkness for a bit..." << std::endl;
}
