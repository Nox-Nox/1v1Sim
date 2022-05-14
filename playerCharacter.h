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

public:
    playerCharacter(string name, int hp, int atk, int def);

    string getName();
    int getHP();
    int getATK();
    int getDEF();

    void getName(string name);
    void setHP(int hp);
    void setATK(int atk);
    void setDEF(int def);
};

#endif