#pragma once
#include <string>
#include "Character.h"

class Boss : public Character {

	// Atributos
	private:
		int superDamage;

	// Prototipos
	public:

		// Constructores
		Boss();

		Boss(const std::string& name, int health, int damage, int superDamage);

		// Getters y Setters
		int getSuperDamage() const;
		void setSuperDamage(int sd);

		// Metodos
		int superAttack(Character& target);
};