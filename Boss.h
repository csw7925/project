#pragma once
class Boss :
	public Monster
{
public:
	int timelimit=7;
	int attacknumber=3;
	int stagecount = 1;

	void BossAttack();
	void StunAttack();
	void ReverseAttack();
	void BlindAttack();
	void OddNumberAttack();
	void EvenNumberAttack();
};