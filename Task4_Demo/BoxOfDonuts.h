#pragma once
#include "Item.h"
class BoxOfDonuts : public Item
{
public:
	void Description() const override;
	void Use() override;
private:
};

