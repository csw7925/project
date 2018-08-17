#pragma once
#include "Player.h"
class Monster:
	public Player
{
public:
	int timelimit=7;
	int attacknumber=3;
	char defensekeyword[10];

	void NormalAttack(int &stagecount,int &hp);
	void MakeAttackKeyword();
};