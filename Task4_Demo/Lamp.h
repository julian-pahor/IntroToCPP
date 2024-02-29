#pragma once
#include "Item.h"
class Lamp : public Item
{

public:
	void Description() const override;
	void Use() override;
private:

};

