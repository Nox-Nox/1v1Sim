#include "playerCharacter.h"
#include "skill.h"
#include <iostream>
#include <cstdint>
#include <cstring>
using namespace std;

playerCharacter::playerCharacter(string cname, int h_p, int a_tk, int d_ef, int e_xp, int l_vl, skill s_kills[4])
{
    name = cname;
    hp = h_p;
    atk = a_tk;
    def = d_ef;
    exp = e_xp;
    lvl = l_vl;
    for (int i = 0; i < 4; i++)
        skills[i] = s_kills[i];
}

string playerCharacter::getName() { return name; }
int playerCharacter::getHP() { return hp; }
int playerCharacter::getATK() { return atk; }
int playerCharacter::getDEF() { return def; }
int playerCharacter::getEXP() { return exp; }
int playerCharacter::getLVL() { return lvl; }

void playerCharacter::getName(string cname) { name = cname; }
void playerCharacter::setHP(int h_p) { hp = h_p; }
void playerCharacter::setATK(int a_tk) { atk = a_tk; }
void playerCharacter::setDEF(int d_ef) { def = d_ef; }
void playerCharacter::setEXP(int e_xp) { exp = e_xp; }
void playerCharacter::setLVL(int l_vl) { lvl = l_vl; }
void playerCharacter::playerStat()
{
    string a = name;
    int b = hp;
    int c = atk;
    int d = def;
    int e = exp;
    int f = lvl;
    cout << "Character's name: " << a << "\nHP: " << b << "\nATK: " << c << "\nDEF: " << d << "\nEXP: " << e << "\nLVL: " << f << endl;
}
