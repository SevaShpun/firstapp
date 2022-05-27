// firstapp.cpp: определяет точку входа для консольного приложения.

#include "stdafx.h"
#include <iostream>
#include <string>
#include "character.cpp"

using namespace std;

int main() {
    Weapon sword("Sword", 'A', 8, 1.5);;
    Weapon axe("Axe", 'A', 8, 1);

    Character player_1("Dev", "Paladin", sword, 100);
    player_1.print();
    
    Character player_2("Barbar", "Ogre", axe, 100);
    player_2.print();
    return 0;
}
// clear; g++ -o Debug/firstapp firstapp.cpp; ./Debug/firstapp.exe
