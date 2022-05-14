#include "foeNPC.h"
using namespace std;

foeNPC::foeNPC(string cname, int h_p, int a_tk, int d_ef)
{
    name = cname;
    hp = h_p;
    atk = a_tk;
    def = d_ef;
}

string foeNPC::getName() { return name; }
int foeNPC::getHP() { return hp; }
int foeNPC::getATK() { return atk; }
int foeNPC::getDEF() { return def; }

void foeNPC::setName(string cname) { name = cname; }
void foeNPC::setHP(int h_p) { hp = h_p; }
void foeNPC::setATK(int a_tk) { atk = a_tk; }
void foeNPC::setDEF(int d_ef) { def = d_ef; }