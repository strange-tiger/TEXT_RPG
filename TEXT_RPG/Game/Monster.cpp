#include "Monster.h"

void Monster::SetName(string name)
{
	_name = name;
}

string Monster::GetName()
{
	return _name;
}

void Monster::SetHp(int16 hp)
{
	_hp = hp;
}

int16 Monster::GetHp()
{
	return _hp;
}

void Monster::ChangeHp(int16 chnHp)
{
	if (GetHp() >= chnHp)
	{
		SetHp(GetHp() - chnHp);
	}
	else
		SetHp(0);
}

void Monster::SetAtt(int16 att)
{
	_att = att;
}

int16 Monster::GetAtt()
{
	return _att;
}