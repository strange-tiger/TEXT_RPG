#pragma once

#include "Macro.h"
#include "Skill.h"

class Job
{
protected:
	typedef enum JobID
	{
		JOB_PROS,
		JOB_PROF,
		JOB_PROG,
		JOB_MAX
	} JobID;

private:
	const string	JOB_NAME[JOB_NUM]		= {"검사", "기사", "프로그래머"};
	const int16		JOB_MAX_HP[JOB_NUM]		= {10, 10, 9};
	const int16		JOB_INIT_ATT[JOB_NUM]	= {10, 10, 9};
	const Skill*	JOB_SKILL[JOB_NUM]		= {&Pros, &Prof, &Prog};
public:

	virtual ~Job();

	void SelectJob(JobID jobID);

	Skill GetSkill();

protected:
	void InitStatus(int16& hp, int16& att);

	int16 GetMaxHp();

	int16 GetInitAtt();

private:
	string	_name		= "";
	int16	_maxHp		= 0;
	int16	_initAtt	= 0;
	Skill	_skill;
	std::vector<std::string>	_script;
};