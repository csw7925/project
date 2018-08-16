#include "main.h"

void Monster::MakeAttackKeyword()
{
	srand((unsigned int)time(NULL));

	char Alphabet[27] = { "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	
	for (int i = 0; i < 10; i++)
	{
		defensekeyword[i] = Alphabet[rand() % 26];
	}
}

void Monster::NormalAttack()
{
	clock_t start, end;
	double result = 0;
	char inputkeyword[20];
	int sw=1;

	MakeAttackKeyword();

	cout << "일반 공격이 시작되었습니다." << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << defensekeyword[i];
	}

	cout << endl;
	while (sw)
	{
		start = clock();
		cin >> inputkeyword;
		for (int i = 0; i < 10; i++)
		{
			if (defensekeyword[i] != inputkeyword[i])
			{
				end = clock();
				result += (double)(end - start);
				cout << timelimit - ((int)result / 1000) << endl;
				if (timelimit - ((int)result / 1000) < 0)
				{
					cout << "시간초과" << endl;
					stagecount = 0;
					sw = 0;
					break;
				}
				cout << "다시 입력하세요" << endl;
				break;
			}
			else if (i == 9)
			{
				end = clock();
				result += (double)(end - start);
				cout << timelimit - ((int)result / 1000) << endl;
				if (timelimit - ((int)result / 1000) < 0)
				{
					cout << "시간초과" << endl;
					stagecount = 0;
					sw=0;
					break;
				}
				cout << "방어에 성공하였습니다." << endl;
				stagecount++;
				sw = 0;
			}
		}		
	}
}