#pragma once

#include "Common.h"
//#include "Job.h"
#include "Monster.h"

class Player // : public Job
{
public:

	// Player(JobID jobID);

	void SetName(string name);

	string GetName();

	void Setjob(string job);

	string Getjob();
	
	void SetHp(int16 hp);

	int16 GetHp();

	void ChangeHp(int chnHp);

	void SetAtt(int16 att);
	
	int16 GetAtt();

	void SetMoney(int16 money);

	int16 GetMoney();

	void Attack(Monster& monster);

	void IsAttacked(Monster& monster);
	
	// void ActiveSkill(Monster& monster);

	bool GameOver();

private:
	string		_name = "";
	string		_job = "";
	int16		_hp = 9;
	int16		_att = 9;
	int16		_money = 0;
	// std::vector<std::string> _inven;
	// std::vector<std::string> _select;
};