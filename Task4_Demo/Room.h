#pragma once

class String;
class Item;

class Room
{
public:
	Item* item;

	Room();
	~Room();
	void SetUpRoom(int i);
	void Description() const;


private:
	String* m_description;

};

