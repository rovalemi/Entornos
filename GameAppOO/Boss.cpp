#include <sstream>
#include <cstdlib>
#include <iostream>
#include "Boss.h"

// Constructores
Boss::Boss(const std::string& name, int health, int damage, int superDamage) : Character(name, health, damage), superDamage(superDamage) {}

// Getters y Setters
int Boss::getSuperDamage() const {
	return superDamage;
}

void Boss::setSuperDamage(const int sd) {
	superDamage = sd;
}

// Metodos
int Boss::superAttack(Character& target) {
	target.setHealth(target.getHealth() - superDamage);
	return superDamage;
}