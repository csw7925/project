#pragma once
class Monster
{
public:
	int timelimit;
	int attacknumber;
	virtual void NormalAttack()=0;
};