#pragma once

#include "Common.h"

class Monster
{
public:
	
	void SetName(string name);

	string GetName();

	void SetHp(int16 hp);

	int16 GetHp();

	void ChangeHp(int16 chnHp);

	void SetAtt(int16 att);

	int16 GetAtt();

private:
	std::string _name = "";
	int16		_hp = 0;
	int16		_att = 0;
};