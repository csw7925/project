#include <iostream>
#include <stdlib.h>
#include "main.h"
using namespace std;

int main()
{
	Player Player;
	Monster Monster;
	Boss Boss;
	cout << "레이드" << endl;
	while (1)
	{
		if (Player.hp == 0)
		{
			cout << "GAME OVER..";
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
	
	return 0;
}