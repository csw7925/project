#include "main.h"
void Monster::MakeAttackKeyword()
{
	srand((unsigned int)time(NULL));

	char Alphabet[27] = { "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	
	for (int i = 0; i < 10; i++)
	{
		defensekeyword[i] = Alphabet[rand() % 26];
		cout << defensekeyword[i];
	}
}

void Monster::NormalAttack()
{
	clock_t start, end;
	double result = 0;
	int sw = 1;
	char inputkeyword[10];

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
				cout << "�ٽ� �Է��ϼ���" << endl;
				i = 10;
			}
			else if (i == 9)
			{
				cout << "�� �����Ͽ����ϴ�." << endl;
				sw = 0;
			}
		}
		end = clock();
		result += (double)(end - start);
		cout << timelimit - (int)result / 1000 << endl;
		if (timelimit - (int)result / 1000 < 0)
		{
			cout << "�ð��ʰ�" << endl;
			break;
		}
	}
}