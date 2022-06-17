#pragma once

#include "common.h"
#include "Job.h"

class Player : public Job
{
public:

	Player()
	{
		InitStatus(_hp, _att, _def);
	}

	void SetName(string name)
	{
		_name = name;
	}

	string GetName()
	{
		return _name;
	}
	
	void ChangeHp(int chnHp)
	{
		if (_hp >= chnHp)
			if(GetMaxHp() >= _hp - chnHp)
				_hp -= chnHp;
		else
			_hp = 0;
	}


private:
	std::string _name;
	int _hp = 0;
	int _att = 0;
	int _def = 0;
	int _money = 0;
	std::vector<std::string> _inven;
	std::vector<std::string> _select;
};