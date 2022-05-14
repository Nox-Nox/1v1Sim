#ifndef PLAYERCHARACTER_H
#define PLAYERCHARACTER_H

#include <string>
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

public:
    playerCharacter(string name, int hp, int atk, int def, int exp, int lvl);

    string getName();
    int getHP();
    int getATK();
    int getDEF();
    int getEXP();
    int getLVL();

    void getName(string name);
    void setHP(int hp);
    void setATK(int atk);
    void setDEF(int def);
    void setEXP(int exp);
    void setLVL(int lvl);
};

#endif