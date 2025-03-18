#pragma once
#include "Character.h"
#include <random>

class Rogue : public Character {
public:
	Rogue(string name);
	void attack(Character& target) override;
	void specialAttack(Character& target) override;
};