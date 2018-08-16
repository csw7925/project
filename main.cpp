#include <iostream>
#include <stdlib.h>
#include "main.h"
using namespace std;

int main()
{
	Monster Monster;
	Boss Boss;
	
	cout << "레이드" << endl;
	while (1)
	{		
		if (Monster.stagecount == 0)
			break;
		else if (Monster.stagecount % 5 == 0)
		{
			cout << "STAGE :" << Monster.stagecount << endl;
			cout << "보스몬스터 출현!!" << endl;			
			Boss.BlindAttack();
			
		}
		else
		{
			cout << "STAGE :" << Monster.stagecount << endl;
			Boss.BossAttack();
			Monster.stagecount++;
		}
	}
	
	return 0;
}