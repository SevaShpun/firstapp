#include <iostream>
#include <string>

using namespace std;

class Weapon {
    public:
        string weaponName = "";
        char weaponType = ' ';
        int damage = 0;
        float distance = 0;
        Weapon() {}

        Weapon(string weapon, char weaponType, int damage, float distance) {
            this->weaponName = weapon;
            this->weaponType = weaponType;
            this->damage = damage;
            this->distance = distance;
        }

        void setValues(string weapon, char weaponType, int damage, float distance) {
            this->weaponName = weapon;
            this->weaponType = weaponType;
            this->damage = damage;
            this->distance = distance;
        }

        void print() {
            cout
            << this->weaponName << " (" << this->weaponType << "), "
            << this->damage << " (" << this->distance << ")" << endl;
        }

        ~Weapon() {}
};