#pragma once
#include "Character.h"

class Warrior : public Character {
public:
	Warrior(string name);
	void attack(Character& target) override;
	void specialAttack(Character& target) override;
};