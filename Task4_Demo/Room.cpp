#include "Room.h"
#include "Cat.h"
#include "BoxOfDonuts.h"
#include "Lamp.h"
#include "String.h"

Room::Room()
{
	item = nullptr;
	m_description = nullptr;
}

Room::~Room()
{
	delete item;
	delete m_description;
}

void Room::SetUpRoom(int i)
{
	switch (i)
	{
	case 1:
		this->item = new Cat();
		this->m_description = new String("The room is practically empty, except for some random cat");
		break;
	case 2:
		this->item = new BoxOfDonuts();
		this->m_description = new String("The room is filled with the smell of fresh donuts, and you see a box of them in the middle of the room.");
		break;
	case 3:
		this->item = new Lamp();
		this->m_description = new String("The room is dark and empty, but out of the corner of your eye you spot a lamp.");
		break;
	case 4:
		this->item = nullptr;
		this->m_description = new String("The room is completely barren");
		break;
	default:
		break;
	}
	//i parameter used to set items in room
}

void Room::Description() const
{
	m_description->WriteToConsole();
}
