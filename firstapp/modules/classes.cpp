#include <iostream>
#include <string>

using namespace std;

class Classes {
    private:
        /* НАЗВАНИЕ КЛАССА */
        string className = "";

        /* КОЛИЧЕСТВО HP И SP */
        // HP per level
        int hp = 0;
        // SP per level
        int sp = 0;

        /* ДОСТУПНЫЕ ОРУЖЕЙНЫЕ НАВЫКИ */
        // Лук
        bool isSword = false;
        // Топор
        bool isAxe = false;
        // Копье
        bool isSpear = false;
        // Булава
        bool isMace = false;
        // Кинжал
        bool isDagger = false;
        // Посох
        bool isStaff = false;
        // Меч
        bool isBow = false;
        // Бластер
        bool isBlaster = false;

        /* ДОСТУПНЫЕ ЗАЩИТНЫЕ НАВЫКИ */
        // Пластины
        bool isPlates = false;
        // Кольчуга
        bool isShainmail = false;
        // Кожа
        bool isLeather = false;
        // Щит
        bool isShield = false;

        /* ДОСТУПНЫЕ МАГИЧЕСКИЕ НАВЫКИ */
        // Стихии
        bool isElements = false;
        // Эго
        bool isEgo = false;
        // Свет/Тьма
        bool isLightDark = false;
        // Медитация
        bool isMeditation = false;
    public:
        Classes() {}

        Classes(string className,int hp,int sp,bool isSword,bool isAxe,bool isSpear,bool isMace,bool isDagger,bool isStaff,bool isBow,bool isBlaster,bool isPlates,bool isShainmail,bool isLeather,bool isShield,bool isElements,bool isEgo,bool isLightDark,bool isMeditation) {
            this->className = className;
            this->hp = hp;
            this->sp = sp;
            this->isSword = isSword;
            this->isAxe = isAxe;
            this->isSpear = isSpear;
            this->isMace = isMace;
            this->isDagger = isDagger;
            this->isStaff = isStaff;
            this->isBow = isBow;
            this->isBlaster = isBlaster;
            this->isPlates = isPlates;
            this->isShainmail = isShainmail;
            this->isLeather = isLeather;
            this->isShield = isShield;
            this->isElements = isElements;
            this->isEgo = isEgo;
            this->isLightDark = isLightDark;
            this->isMeditation = isMeditation;
        }

        void setValues(string className,int hp,int sp,bool isSword,bool isAxe,bool isSpear,bool isMace,bool isDagger,bool isStaff,bool isBow,bool isBlaster,bool isPlates,bool isShainmail,bool isLeather,bool isShield,bool isElements,bool isEgo,bool isLightDark,bool isMeditation) {
            this->className = className;
            this->hp = hp;
            this->sp = sp;
            this->isSword = isSword;
            this->isAxe = isAxe;
            this->isSpear = isSpear;
            this->isMace = isMace;
            this->isDagger = isDagger;
            this->isStaff = isStaff;
            this->isBow = isBow;
            this->isBlaster = isBlaster;
            this->isPlates = isPlates;
            this->isShainmail = isShainmail;
            this->isLeather = isLeather;
            this->isShield = isShield;
            this->isElements = isElements;
            this->isEgo = isEgo;
            this->isLightDark = isLightDark;
            this->isMeditation = isMeditation;
        }

        void print() {
            cout << "Class: " << this->className << endl;
            cout << "HP: " << this->hp << endl;
            cout << "SP: " << this->sp << endl;
            cout << "Sword: " << this->isSword << endl;
            cout << "Axe: " << this->isAxe << endl;
            cout << "Spear: " << this->isSpear << endl;
            cout << "Mace: " << this->isMace << endl;
            cout << "Dagger: " << this->isDagger << endl;
            cout << "Staff: " << this->isStaff << endl;
            cout << "Bow: " << this->isBow << endl;
            cout << "Plates: " << this->isPlates << endl;
            cout << "Shainmail: " << this->isShainmail << endl;
            cout << "Leather: " << this->isLeather << endl;
            cout << "Shield: " << this->isShield << endl;
            cout << "Elements: " << this->isElements << endl;
            cout << "Ego: " << this->isEgo << endl;
            cout << "LightDark: " << this->isLightDark << endl;
            cout << "Meditation: " << this->isMeditation << endl;
        }

        ~Classes() {}
};