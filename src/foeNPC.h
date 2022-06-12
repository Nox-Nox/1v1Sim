#ifndef FOENPC_H
#define FOENPC_H

#include <string>
using namespace std;

class foeNPC
{
private:
    string name;
    int hp;
    int atk;
    int def;
    int lvl;

public:
    foeNPC(string name, int hp, int atk, int def, int lvl);

    string getName();
    int getHP();
    int getATK();
    int getDEF();
    int getLVL();

    void setName(string name);
    void setHP(int hp);
    void setATK(int atk);
    void setDEF(int def);
    void setLVL(int lvl);
    void foeAI();
};

#endif