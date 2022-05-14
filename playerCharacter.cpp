#include "playerCharacter.h"
using namespace std;

playerCharacter::playerCharacter(string cname, int h_p, int a_tk, int d_ef, int e_xp, int l_vl)
{
    name = cname;
    hp = h_p;
    atk = a_tk;
    def = d_ef;
    exp = e_xp;
    lvl = l_vl;
}

string getName();
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
