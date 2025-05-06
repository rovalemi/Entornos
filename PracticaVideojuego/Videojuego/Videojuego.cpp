#include <iostream>
using namespace std;

/* EJEMPLO 1
* 
* 
int main() {
	int heroHP = 100;
	int heroA = 15;

	int enemyHP = 80;
	int enemyA = 30;

	cout << "Let's start!\n";

	while (heroHP > 0 && enemyHP > 0) {

		enemyHP -= heroA;
		cout << "El heroe ataca y causa " << heroA << " de dano. Enemigo HP: " << enemyHP << ".\n";
		if (enemyHP <= 0) break;

		heroHP -= enemyA;
		cout << "El enemigo ataca y causa " << enemyA << " de dano. Heroe HP: " << heroHP << ".\n";

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

/* EJEMPLO 2
*
* 
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
	cout << "El enemigo ataca y causa " << enemyA << " de dano. Heroe HP: " << heroHP << ".\n";
}

void printStatus() {
	cout << "Estado actual: Heroe HP: " << heroHP << ", Enemigo HP: " << enemyHP << ".\n";
}

int main() {
	cout << "Let's start!\n";

	while (heroHP > 0 && enemyHP > 0) {
		heroAttackEnemy();
		if (enemyHP <= 0) break;

		enemyAttackHero();
		printStatus();
	}

	if (heroHP > 0) {
		cout << "El heroe ha ganado el combate!\n";
	} else {
		cout << "El enemigo ha ganado el combate!\n";
	}

	system("pause");
	return 0;
}
*/

/* EJEMPLO 3
* 
* 
void heroAttackEnemy(int heroA, int &enemyHP) {
	enemyHP -= heroA;
	cout << "El heroe ataca y causa " << heroA << " de dano. Enemigo HP: " << enemyHP << ".\n";
}

void enemyAttackHero(int enemyA, int &heroHP) {
	heroHP -= enemyA;
	cout << "El enemigo ataca y causa " << enemyA << " de dano. Heroe HP: " << heroHP << ".\n";
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
		heroAttackEnemy(heroA, enemyHP);
		if (enemyHP <= 0) break;

		enemyAttackHero(enemyA, heroHP);
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

/* EJEMPLO 4 
* 
* 
int heroAttackEnemy(int heroA, int& enemyHP) {
	enemyHP -= heroA;
	cout << "El heroe ataca y causa " << heroA << " de dano. Enemigo HP: " << enemyHP << ".\n";
	return enemyHP;
}

int enemyAttackHero(int enemyA, int& heroHP) {
	heroHP -= enemyA;
	cout << "El enemigo ataca y causa " << enemyA << " de dano. Heroe HP: " << heroHP << ".\n";
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
		enemyHP = heroAttackEnemy(heroA, enemyHP);
		if (enemyHP <= 0) break;

		heroHP = enemyAttackHero(enemyA, heroHP);
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

/* EJEMPLO 5
*
* 
struct Role {
	string name;
	int hp;
	int attack;
};

void gameAttack(Role& hero, Role& enemy) {
	enemy.hp -= hero.attack;
	cout << "El " << hero.name << " ataca y causa " << hero.attack
		<< " de dano." << enemy.name << " HP: " << enemy.hp << ".\n";
}

void printStatus(const Role &hero, const Role &enemy) {
	cout << "Estado actual: " << hero.name << " HP: " << hero.hp
		<< ", " << enemy.name << " HP: " << enemy.hp << ".\n";
}

int main() {
	Role hero = { "heroe", 100, 15 };
	Role enemy = { "enemigo", 80, 30 };

	cout << "Let's start!\n";

	while (hero.hp > 0 && enemy.hp > 0) {
		gameAttack(hero, enemy);
		if (enemy.hp <= 0) break;

		gameAttack(enemy, hero);
		printStatus(hero, enemy);
	}

	if (hero.hp > 0) {
		cout << "El " << hero.name << " ha ganado el combate!\n";
	}
	else {
		cout << "El " << enemy.name << " ha ganado el combate!\n";
	}

	system("pause");
	return 0;
}
*/