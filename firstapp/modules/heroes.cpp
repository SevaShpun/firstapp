#include <iostream>
#include <string>
#include "classes.cpp"

using namespace std;

class Heroes: public Classes {
    public:
        Classes Knight("Knight",4,0,true,true,true,true,true,true,true,true,true,true,true,true,false,false,false,false);
        Classes cavalier("Cavalier",6,0,true,true,true,true,true,true,true,true,true,true,true,true,false,false,false,false);
        Classes champion("Champion",8,0,true,true,true,true,true,true,true,true,true,true,true,true,false,false,false,false);

        Classes paladin("Paladin",3,1,true,true,true,true,true,true,true,true,true,true,true,true,false,true,false,true);
        Classes crusader("Crusader",4,2,true,true,true,true,true,true,true,true,true,true,true,true,false,true,false,true);
        Classes hero("Hero",5,3,true,true,true,true,true,true,true,true,true,true,true,true,false,true,false,true);

        Classes archer("Archer",3,1,true,true,true,true,true,true,true,true,false,true,true,false,true,false,false,true);
        Classes battleMage("Battle Mage",4,2,true,true,true,true,true,true,true,true,false,true,true,false,true,false,false,true);
        Classes warriorMage("Warrior Mage",5,3,true,true,true,true,true,true,true,true,false,true,true,false,true,false,false,true);

        Classes druid("Druid",2,3,false,false,false,true,true,true,true,true,false,false,true,true,true,true,false,true);
        Classes greatDruid("Great Druid",3,4,false,false,false,true,true,true,true,true,false,false,true,true,true,true,false,true);
        Classes archDruid("Arch Druid",4,5,false,false,false,true,true,true,true,true,false,false,true,true,true,true,false,true);

        Classes cleric("Cleric",2,3,false,false,false,true,false,true,true,true,false,true,true,true,false,true,true,true);
        Classes priest("Priest",3,4,false,false,false,true,false,true,true,true,false,true,true,true,false,true,true,true);
        Classes highPriest("High Priest",4,5,false,false,false,true,false,true,true,true,false,true,true,true,false,true,true,true);

        Classes sorcerer("Sorcerer",2,3,false,false,false,false,false,true,true,true,false,false,true,false,true,false,true,true);
        Classes wizard("Wizard",3,4,false,false,false,false,false,true,true,true,false,false,true,false,true,false,true,true);
        Classes archMage("Arch Mage",4,5,false,false,false,false,false,true,true,true,false,false,true,false,true,false,true,true);
};