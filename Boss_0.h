#pragma once
class Boss
{
public:
	int timelimit=5;
	int attacknumber=5;

	virtual void NormalAttack();
	virtual void StunAttack();
	virtual void ReverseAttack();
	virtual void BlindAttack();
	virtual void OddNumberAttack();
	virtual void EvenNumberAttack();
};