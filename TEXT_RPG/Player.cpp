#include "Player.h"

//Player::Player(JobID jobID)
//{
//	SelectJob(jobID);
//	InitStatus(_hp, _att);
//}

extern Player player;

void Player::SetName(string name)
{
	_name = name;
}

string Player::GetName()
{
	return _name;
}

void Player::Setjob(string job)
{
	_job = job;
}

string Player::Getjob()
{
	return _job;
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
		if (/*GetMaxHp()*/ 9 >= GetHp() - chnHp)
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

void Player::SetMoney(int16 money)
{
	_money = money;
}

int16 Player::GetMoney()
{
	return _money;
}

void Player::Attack(Monster& monster)
{
	monster.ChangeHp(GetAtt());
}

void Player::IsAttacked(Monster& monster)
{
	ChangeHp(monster.GetAtt());
}

//void Player::ActiveSkill(Monster& monster)
//{
//	GetSkill().UseSkill();
//	_att += GetSkill().GetDamage();
//}

bool Player::GameOver()
{
	if (_hp == 0)
	{
		return true;
	}
	return false;
}