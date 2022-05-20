#include "skill.h"
using namespace std;
skill::skill() {}
skill::skill(string skillName, int dmg)
{
    skill_name = skillName;
    damage = dmg;
}

string skill::getSkillName() { return skill_name; }
int skill::getDamage() { return damage; }

void skill::setSkillName(string skillName) { skill_name = skillName; }
void skill::setDamage(int dmg) { damage = dmg; }
