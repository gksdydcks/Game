#pragma once
#include "Character.h"

class Mage : public Character {
private:
	int mana;

public:
	Mage(string name);
	void attack(Character& target) override;
	void specialAttack(Character& target) override;
};