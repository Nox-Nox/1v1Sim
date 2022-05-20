#ifndef SKILL_H
#define SKILL_H

#include <string>
using namespace std;

class skill
{
private:
    string skill_name;
    int damage;

public:
    skill();
    skill(string skill_name, int damage);

    string getSkillName();
    int getDamage();

    void setSkillName(string skill_name);
    void setDamage(int damage);
};

#endif