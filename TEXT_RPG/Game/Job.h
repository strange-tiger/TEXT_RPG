#pragma once

class Job
{
	static const string JobName[4];
public:

	void SelectJob()
	{

	}

	void InitStatus(int& hp, int& att, int& def)
	{
		hp	= GetMaxHp();
		att = GetInitAtt();
		def = GetInitDef();
	}

	int GetMaxHp()
	{
		return maxHp;
	}

	int GetInitAtt()
	{
		return initAtt;
	}

	int GetInitDef()
	{
		return initDef;
	}

private:
	int maxHp;
	int initAtt;
	int initDef;
	string skill;
};