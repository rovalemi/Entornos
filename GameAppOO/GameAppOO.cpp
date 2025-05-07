#pragma comment(lib, "winmm.lib")
#include <Windows.h>
#include <mmsystem.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Character.h"
#include "Boss.h"

using namespace std;

int main() {

    PlaySound(TEXT("02-The-Assassin-in-White.wav"), NULL, SND_FILENAME | SND_ASYNC);

    srand(static_cast<unsigned int>(time(nullptr)));

    // Creacion de personajes
    Character hero("Aragon", 100, 0);
    Character enemy("Sauron", 100, 0);
    Boss finalBoss("Lord", 150, 20, 40);

    // Introduccion
    cout << "¡Bienvenido a la batalla epica entre " 
        << hero.getName() << " y " << enemy.getName() << "!\n\n";

    // Bucle de batalla
    while (hero.getHealth() > 0 && enemy.getHealth() > 0) {

        // Turno del heroe
        cout << "Elige tu ataque:\n";
        cout << "1) Patada\n";
        cout << "2) Mandoble\n";
        cout << "Opcion: ";
        int choice;
        cin >> choice;
        cout << "\n";

        hero.attack(enemy, choice);

        if (enemy.getHealth() <= 0) {
            cout << "\n" << enemy.getName() << " ha sido derrotado.\n";
            break;
        }

        // Turno del enemigo
        int enemyChoice = rand() % 2 + 1;
        enemy.attack(hero, enemyChoice);

        if (hero.getHealth() <= 0) {
            cout << "\n" << hero.getName() << " ha sido derrotado.\n";
            cout << "Fin del juego.\n";
            return 0;
        }

        // Mostrar status de ambos despues de ronda
        cout << "\n----- Estado de los personajes -----\n";
        cout << hero.getStatus();
        cout << enemy.getStatus();
        cout << "------------------------------------\n\n";
    }

    cout << "\n¡El " << hero.getName() << " ahora debe de enfrentarse al Boss final: " << finalBoss.getName() << "!\n\n";

    // Bucle de batalla con el Boss
    while (hero.getHealth() > 0 && finalBoss.getHealth() > 0) {

        // Turno del héroe
        cout << "Elige tu ataque:\n";
        cout << "1) Patada\n";
        cout << "2) Mandoble\n";
        cout << "Opcion: ";
        int choice;
        cin >> choice;
        cout << "\n";

        hero.attack(finalBoss, choice);

        if (finalBoss.getHealth() <= 0) {
            cout << "\n¡" << finalBoss.getName() << " ha sido derrotado!\n";
            cout << "¡Felicidades! Has ganado el juego.\n";
            return 0;
        }

        // Turno del Boss con super ataque
        if (rand() % 2 == 0) {
            cout << finalBoss.getName() << " usa su Super Ataque devastador.\n";
            finalBoss.superAttack(hero);
        }
        else {
            finalBoss.attack(hero, 1);
        }

        if (hero.getHealth() <= 0) {
            cout << "\n" << hero.getName() << " ha sido derrotado por el Boss.\n";
            cout << "Fin del juego.\n";
            return 0;
        }

        // Mostrar estado de los personajes
        cout << "\n----- Estado de los personajes -----\n";
        cout << hero.getStatus();
        cout << finalBoss.getStatus();
        cout << "------------------------------------\n\n";
    }

    cout << "Fin de la batalla.\n";
    return 0;
}