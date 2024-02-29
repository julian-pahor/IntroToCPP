#pragma once
#include "Item.h"
class Cat : public Item
{
public:

	void Description() const override;
	void Use() override;

private:

};

