#ifndef PLAYERCHARACTER_H
#define PLAYERCHARACTER_H
#include "skill.h"
#include <string>
#include <cstdint>
#include <cstring>
using namespace std;

class playerCharacter

{
private:
    string name;
    int hp;
    int atk;
    int def;
    int exp;
    int lvl;
    skill skills[4];

public:
    playerCharacter(string name, int hp, int atk, int def, int exp, int lvl, skill s_kills[4]);

    // void blobl();
    string getName();
    int getHP();
    int getATK();
    int getDEF();
    int getEXP();
    int getLVL();
    skill getSkill();

    void getName(string name);
    void setHP(int hp);
    void setATK(int atk);
    void setDEF(int def);
    void setEXP(int exp);
    void setLVL(int lvl);
    void playerStat();
    void setSkill();
};

#endif
