// Ejemplo 1
/*
#include <iostream>
using namespace std;

int heroHP = 100;
int heroA = 15;

int enemyHP = 80;
int enemyA = 30;

int main() {

	cout << "Let's start!\n";

	while (heroHP > 0 && enemyHP > 0) {

		// Heroe ataca a villano
		enemyHP -= heroA;
		cout << "El heroe ataca y causa " << heroA << " de dano. Enemigo HP: " << enemyHP << ".\n";

		// Villano contra ataca
		heroHP -= enemyA;
		cout << "El enemigo contraataca y causa " << enemyA << " de dano. Heroe HP: " << heroHP << ".\n";

		// Se muestra estatus
		cout << "Estado actual: Heroe HP: " << heroHP << ", Enemigo HP: " << enemyHP << ".\n";
	}

	if (heroHP > 0) {
		cout << "El heroe ha ganado el combate!\n";
	}
	else {
		cout << "El enemigo ha ganado el combate!\n";
	}

	system("pause");
	return 0;
}
*/

// Ejemplo 2
/*
#include <iostream>
using namespace std;

int heroHP = 100;
int heroA = 15;

int enemyHP = 80;
int enemyA = 30;

void heroAttackEnemy() {
	enemyHP -= heroA;
	cout << "El heroe ataca y causa " << heroA << " de dano. Enemigo HP: " << enemyHP << ".\n";
}

void enemyAttackHero() {
	heroHP -= enemyA;
	cout << "El enemigo contraataca y causa " << enemyA << " de dano. Heroe HP: " << heroHP << ".\n";
}

void printStatus() {
	cout << "Estado actual: Heroe HP: " << heroHP << ", Enemigo HP: " << enemyHP << ".\n";
}

int main() {
	cout << "Let's start!\n";

	while (heroHP > 0 && enemyHP > 0) {
		heroAttackEnemy();

		enemyAttackHero();

		printStatus();
	}

	if (heroHP > 0) {
		cout << "El heroe ha ganado el combate!\n";
	}
	else {
		cout << "El enemigo ha ganado el combate!\n";
	}

	system("pause");
	return 0;
}
*/

// Ejemplo 3
/*
#include <iostream>
using namespace std;

void heroAttackEnemy(int &enemyHP, int heroA) {
	enemyHP -= heroA;
	cout << "El heroe ataca y causa " << heroA << " de dano. Enemigo HP: " << enemyHP << ".\n";
}

void enemyAttackHero(int &heroHP, int enemyA) {
	heroHP -= enemyA;
	cout << "El enemigo contraataca y causa " << enemyA << " de dano. Heroe HP: " << heroHP << ".\n";
}

void printStatus(int heroHP, int enemyHP) {
	cout << "Estado actual: Heroe HP: " << heroHP << ", EnemigoHP: " << enemyHP << ".\n";
}

int main() {
	cout << "Let's start!";

	int heroHP = 100;
	int heroA = 15;

	int enemyHP = 80;
	int enemyA = 30;

	while (heroHP > 0 && enemyHP > 0) {

		heroAttackEnemy(enemyHP, heroA);

		enemyAttackHero(heroHP, enemyA);

		printStatus(heroHP, enemyHP);
	}

	if (heroHP > 0) {
		cout << "El heroe ha ganado el combate!\n";
	}
	else {
		cout << "El enemigo ha ganado el combate!\n";
	}

	system("pause");
	return 0;
}
*/

// Ejemplo 4
/*
#include <iostream>
using namespace std;

int heroAttackEnemy(int enemyHP, int heroA) {
	enemyHP -= heroA;
	cout << "El heroe ataca y causa " << heroA << " de dano. Enemigo HP: " << enemyHP << ".\n";
	return enemyHP;
}

int enemyAttackHero(int heroHP, int enemyA) {
	heroHP -= enemyA;
	cout << "El enemigo contraataca y causa " << enemyA << " de dano. Heroe HP: " << heroHP << ".\n";
	return heroHP;
}

void printStatus(int heroHP, int enemyHP) {
	cout << "Estado actual: Heroe HP: " << heroHP << ", Enemigo HP: " << enemyHP << ".\n";
}

int main() {
	int heroHP = 100;
	int heroA = 15;

	int enemyHP = 80;
	int enemyA = 30;

	cout << "Let's start!\n";

	while (heroHP > 0 && enemyHP > 0) {
		enemyHP = heroAttackEnemy(enemyHP, heroA);
		
		heroHP = enemyAttackHero(heroHP, enemyA);

		printStatus(heroHP, enemyA);
	}

	if (heroHP > 0) {
		cout << "El heroe ha ganado el combate!\n";
	}
	else {
		cout << "El enemigo ha ganado el combate!\n";
	}

	system("pause");
	return 0;
}
*/

// Ejemplo 5
/*
#include <iostream>
using namespace std;

struct Role {
	string name;
	int hp;
	int attack;
};

void gameAttack(Role& charac01, Role& charac02) {
	charac02.hp -= charac01.attack;
	cout << "El " << charac01.name << " ataca y causa " << charac01.attack << " de dano. El " << charac02.name << " HP: " << charac02.hp << ".\n";
}

void printStatus(const Role& charac01, const Role& charac02) {
	cout << "Estado actual: " << charac01.name << " HP: " << charac01.hp << ", " << charac02.name << " HP: " << charac02.hp << ".\n";
}

int main() {
	Role heroe = { "heroe", 100, 15 };
	Role enemigo = { "enemigo", 80, 30 };

	cout << "Let's start!\n";

	while (heroe.hp > 0 && enemigo.hp > 0) {
		gameAttack(heroe, enemigo);

		gameAttack(enemigo, heroe);

		printStatus(heroe, enemigo);
	}

	if (heroe.hp > 0) {
		cout << "El " << heroe.name << " ha ganado el combate!\n";
	}
	else {
		cout << "El " << enemigo.name << " ha ganado el combate!\n";
	}

	system("pause");
	return 0;
}
*/