#pragma once
class Monster
{
public:
	int timelimit=7;
	int attacknumber=3;
	int stagecount = 1;
	char defensekeyword[10];
	void NormalAttack();
	void MakeAttackKeyword();
};