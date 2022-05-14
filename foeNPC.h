#ifndef FOENPC_H
#define FOENPC_h

#include <string>
using namespace std;

class foeNPC
{
private:
    string name;
    int hp;
    int atk;
    int def;

public:
    foeNPC(string name, int hp, int atk, int def);

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