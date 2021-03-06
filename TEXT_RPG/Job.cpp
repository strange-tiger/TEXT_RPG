#include "Job.h"

void Job::SelectJob(JobID jobID)
{
	_name = JOB_NAME[jobID];
	_maxHp = JOB_MAX_HP[jobID];
	_initAtt = JOB_INIT_ATT[jobID];
	_skill = *JOB_SKILL[jobID];
}

Skill Job::GetSkill()
{
	return _skill;
}

void Job::InitStatus(int16& hp, int16& att)
{
	hp = GetMaxHp();
	att = GetInitAtt();
}

int16 Job::GetMaxHp()
{
	return _maxHp;
}

int16 Job::GetInitAtt()
{
	return _initAtt;
}
