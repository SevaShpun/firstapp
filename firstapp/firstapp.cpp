// firstapp.cpp: определяет точку входа для консольного приложения.

#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
#include "modules/character.cpp"
#include "modules/utils.cpp"

using namespace std;

int main() {
    srand(time(NULL));
    int sword_rand_dmg = rand_int(0, 8);
    int axe_rand_dmg = rand_int(0, 6);

    Weapon sword;
    sword.weaponName = "Sword";
    sword.weaponType = 'A';
    sword.damage = sword_rand_dmg;
    Weapon axe("Axe", 'A', 6);

    Character player_1("Dev", "Paladin", sword, 100);
    player_1.print();
    
    Character player_2("Barbar", "Ogre", axe, 100);
    player_2.print();

    return 0;
}
// clear; g++ -o Debug/firstapp firstapp.cpp; ./Debug/firstapp.exe
