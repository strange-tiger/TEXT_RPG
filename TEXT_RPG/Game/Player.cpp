#include "Player.h"

Player::Player(int16 jobID)
{
	SelectJob(jobID);
	InitStatus(_hp, _att);
}

void Player::SetName(string name)
{
	_name = name;
}

string Player::GetName()
{
	return _name;
}

void Player::SetHp(int16 hp)
{
	_hp = hp;
}

int16 Player::GetHp()
{
	return _hp;
}

void Player::ChangeHp(int chnHp)
{
	if (GetHp() >= chnHp)
	{
		if (GetMaxHp() >= GetHp() - chnHp)
		{
			SetHp(GetHp() - chnHp);
		}
	}
	else
		SetHp(0);
}

void Player::SetAtt(int16 att)
{
	_att = att;
}

int16 Player::GetAtt()
{
	return _att;
}

void Player::Attack(Monster& monster)
{
	monster.ChangeHp(GetAtt());
}

void Player::IsAttacked(Monster& monster)
{
	ChangeHp(monster.GetAtt());
}

bool Player::GameOver()
{
	if (_hp == 0)
	{
		return true;
	}
	return false;
}