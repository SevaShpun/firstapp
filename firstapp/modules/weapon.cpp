#include <iostream>
#include <string>

using namespace std;

class Weapon {
    public:
        string weaponName = "";
        char weaponType = ' ';
        int damage = 0;
        Weapon() {}

        Weapon(string weapon, char weaponType, int damage) {
            this->weaponName = weapon;
            this->weaponType = weaponType;
            this->damage = damage;
        }

        void setValues(string weapon, char weaponType, int damage) {
            this->weaponName = weapon;
            this->weaponType = weaponType;
            this->damage = damage;
        }

        void print() {
            cout << this->weaponName << " (" << this->weaponType << "), " << this->damage << endl;
        }

        ~Weapon() {}
};