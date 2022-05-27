#include "stdafx.h"
#include <iostream>
#include <string>
#include "weapon.cpp"

using namespace std;

class Character {
    private:
        string name = "";
        string characterClass = "";
        Weapon characterWeapon;
        int hp = 0;
    public:
        Character() {}

        Character(string name, string characterClass, Weapon heroWeapon, int hp) {
            this->name = name;
            this->characterClass = characterClass;
            this->characterWeapon = heroWeapon;
            this->hp = hp;
        }

        void setValues(string name, string characterClass, Weapon heroWeapon, int hp) {
            this->name = name;
            this->characterClass = characterClass;
            this->characterWeapon = heroWeapon;
            this->hp = hp;
        }

        void print() {
            cout << "Hero: "
            << this->name << " (" << this->characterClass << "), "
            << "Weapon: " << this->characterWeapon.weaponName << ", ("
            << this->characterWeapon.damage << "),"
            << " HP:" << this->hp << endl;
        }

        ~Character() {}
};