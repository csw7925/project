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

	cout << "�Ϲ� ������ ���۵Ǿ����ϴ�." << endl;

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
					cout << "�ð��ʰ�" << endl;
					stagecount = 0;
					sw = 0;
					break;
				}
				cout << "�ٽ� �Է��ϼ���" << endl;
				break;
			}
			else if (i == 9)
			{
				end = clock();
				result += (double)(end - start);
				cout << timelimit - ((int)result / 1000) << endl;
				if (timelimit - ((int)result / 1000) < 0)
				{
					cout << "�ð��ʰ�" << endl;
					stagecount = 0;
					sw=0;
					break;
				}
				cout << "�� �����Ͽ����ϴ�." << endl;
				stagecount++;
				sw = 0;
			}
		}		
	}
}