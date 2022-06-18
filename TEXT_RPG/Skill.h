#pragma once

#include "Common.h"
#include "Player.h"

class Skill
{
public:

	void SetDamage(int16 dam);

	int16 GetDamage();

	virtual void UseSkill()
	{
		SetDamage(100);
	}
	
	void SetScript(std::string script);

private:
	std::vector<std::string>	_script;
	int16						_damage = 0;
};

class Programing :public Skill
{
public:
	void UseSkill(Player& player)
	{
		player.SetHp(65535);
		player.SetAtt(65535);
	}
};

const Skill Pros;
const Skill Prof;
const Skill Prog;