#include "playerCharacter.h"
using namespace std;

playerCharacter::playerCharacter(string cname, int h_p, int a_tk, int d_ef)
{
    name = cname;
    hp = h_p;
    atk = a_tk;
    def = d_ef;
}

string getName();
int playerCharacter::getHP() { return hp; }
int playerCharacter::getATK() { return atk; }
int playerCharacter::getDEF() { return def; }

void playerCharacter::getName(string cname) { name = cname; }
void playerCharacter::setHP(int h_p) { hp = h_p; }
void playerCharacter::setATK(int a_tk) { atk = a_tk; }
void playerCharacter::setDEF(int d_ef) { def = d_ef; }