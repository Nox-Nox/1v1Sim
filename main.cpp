#include <iostream>
#include "playerCharacter.h"
#include "foeNPC.h"
#include "skill.h"
using namespace std;

int main(int argc, char const *argv[])
{
    int round = 0;
    bool alive = true;

    skill slash("slash", 15);
    string name;
    cout << "Hi! please choose your character's nick name: ";
    getline(cin, name);

    int baseHP = 100;
    int baseATK = 10;
    int baseDEF = 5;
    int initialLVL = 0;
    int initialEXP = 0;

    playerCharacter *ptr;
    playerCharacter player(name, 100, 10, 5, 0, 0);
    ptr = &player;
    foeNPC goblin("Goblin", 50, 8, 5, 0);
    ptr->playerStat();
    return 0;
}
