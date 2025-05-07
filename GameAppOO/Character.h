#pragma once
#include <string>

class Character {

	// Atributos
	private:
		std::string name;
		int health;
		int damage;

	// Prototipos
	public:

		// Constructores
		Character();

		Character(const std::string& name, int health, int damage);

		// Getters y Setters
		std::string getName() const;
		void setName(const std::string& newName);

		int getHealth() const;
		void setHealth(int h);

		int getDamage() const;
		void setDamage(int d);

		// Metodos
		std::string getStatus() const;

		int attack(Character& target, int attackType);
};