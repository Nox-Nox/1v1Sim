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
    skill hydrobomb("hydrobomb", 10);
    skill cut("cut", 8);
    skill splash("splash", 12);
    skill s[4];
    int i;
    s[0] = slash;
    s[1] = hydrobomb;
    s[2] = cut;
    s[3] = splash;

    skill *skillPtr;
    skillPtr = s;
    // cout << s[0].getSkillName() << "\n";
    // for (i = 0; i < 4; i++)
    // {
    //     cout << "skill: " + i << s[i].getSkillName() << " Damage: " + s[i].getDamage;
    //     cout << "\n";
    // }
    string name;
    cout << "Hi! please choose your character's nick name: ";
    getline(cin, name);

    int baseHP = 100;
    int baseATK = 10;
    int baseDEF = 5;
    int initialLVL = 0;
    int initialEXP = 0;

    playerCharacter *playerPtr;
    foeNPC *foePtr;

    playerCharacter player(name, 100, 10, 5, 0, 0, s);
    playerPtr = &player;

    foeNPC monster(name, 50, 8, 5, 0);
    foePtr = &monster;

    playerPtr->playerStat();

    int move;
    // while (alive)
    // {
    int turn = 0;
    for (i = 0; i < 4; i++)
    {
        cout << "skill: " << i << " " << s[i].getSkillName() << " Damage: " + to_string(s[i].getDamage()) << "\n";
    }

    cout << "Which skill do you wanna use? ";
    cin >> move;

    if (0 < move < 4)
    {
        int p_s_dmg = playerPtr->getATK() + (skillPtr + move)->getDamage();
        cout << to_string(p_s_dmg) << "\n";
        int monsterDef = foePtr->getDEF();
        int monsterHP = foePtr->getHP();
        int new_monster_hp = monsterHP - (p_s_dmg - monsterDef);
        foePtr->setHP(new_monster_hp);
        cout << to_string(foePtr->getHP());
    }

    // if (0 < move < 4)
    // {
    //     cout << "you used " + s[move].getSkillName();
    //     s[move].getDamage();
    //     monster.getHP();
    //     monster.getDEF();
    //     monster.setHP((s[move].getDamage() - monster.getDEF()) - monster.getHP());
    //     cout << monster.getHP();
    // }
    // }
    // for (i = 0; i < 4; i++)
    // {
    //     cout << "skill: " << i << " " << s[i].getSkillName() << " Damage: " << s[i].getDamage() << "\n";
    // }

    return 0;
}
