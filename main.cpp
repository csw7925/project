#include <iostream>
#include <stdlib.h>
#include "main.h"
using namespace std;

int main()
{
	Player Player;
	Monster Monster;
	Boss Boss;
	clock_t start, end;
	double result = 0;

	cout << "레이드" << endl;
	start = clock();
	while (1)
	{
		system("cls");
		cout << "STAGE : " << Player.stagecount << "HP : " << Player.hp;
		if (Player.hp == 0)
		{
			cout << "GAME OVER..";
			break;
		}
		else if (Player.stagecount == 16)
		{
			cout << "CLEAR! Congratulation!!" << endl;
			break;
		}
		else if (Player.stagecount % 5 == 0)
		{
			cout << "STAGE :" << Player.stagecount << endl;
			cout << "보스몬스터 출현!!" << endl;			
			Boss.BossAttack(Boss.deathcount,Player.stagecount,Player.hp);
			if (Boss.deathcount == 3)
				Player.hp = 0;
			else
			{
				Player.stagecount++;
				Boss.deathcount = 0;
			}				
		}
		else
		{
			cout << "STAGE :" << Player.stagecount << endl;
			Monster.MonsterAttack(Player.stagecount,Player.hp);
		}
		cout << "HP : " << Player.hp << endl;
	}
	end = clock();
	result += (double)(end - start);
	cout << "걸린시간 : " << (int)result << endl;

	return 0;
}