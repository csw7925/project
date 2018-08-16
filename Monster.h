#pragma once
class Monster
{
public:
	int timelimit;
	int attacknumber;
	char defensekeyword[10];
	void NormalAttack();
	void MakeAttackKeyword();
};