#include "Skill.h"

void Skill::SetDamage(int16 dam)
{
	_damage = dam;
}

void Skill::SetScript(std::string script)
{
	_script.push_back(script);
}