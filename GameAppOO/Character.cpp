#include "Character.h"
#include <sstream>
#include <cstdlib>
#include <iostream>

// Constructores
Character::Character(const std::string& name, int health, int damage) {
	this->name = name;
	this->health = health;
	this->damage = damage;
}

Character::Character() {
	name = "Unknown";
	health = 100;
	damage = 10;
}

// Getters y Setters
std::string Character::getName() const {
	return name;
}

void Character::setName(const std::string& newName) {
	name = newName;
}

int Character::getHealth() const {
	return health;
}

void Character::setHealth(const int h) {
	health = h;
}

int Character::getDamage() const {
	return damage;
}

void Character::setDamage(const int d) {
	damage = d;
}

// Metodos
std::string Character::getStatus() const {
	std::ostringstream os;
	os << "Personaje: " << name << " | Vida: " << health << "\n";
	return os.str();
}

int Character::attack(Character& target, int attackType) {
	int dmg = 0;

	if (attackType == 1) {
		dmg = rand() % 20 + 1;
		if (dmg < 5) {
			dmg = 10;
		}
	}
	else if (attackType == 2) {
		dmg = rand() % 30 + 1;
		if (dmg < 15) {
			dmg = 15;
		}
		else if (dmg > 25) {
			int dice = rand() % 10 + 1;
			if (dice >= 6) {
				dmg = 0;
			}
		}
	}
	else {
		std::cout << name << " se equivoca y falla el ataque.\n";
		dmg = 0;
	}

	int newHealth = target.getHealth() - dmg;
	target.setHealth(newHealth);

	std::cout << name << " ataca a " << target.getName() << " con " << dmg << " de danyo.\n";

	return dmg;
}