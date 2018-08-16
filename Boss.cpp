#include "main.h"

void Boss ::BlindAttack()
{
	clock_t start, end;
	double result = 0;
	char inputkeyword[20];
	int sw = 1;
	srand((unsigned int)time(NULL));
	MakeAttackKeyword();

	cout << "����ε� ������ ���۵Ǿ����ϴ�." << endl;

	for (int i = 0; i < 10; i++)
	{
		if (i == 9)
			cout << "?";
		else
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
					sw = 0;
					break;
				}
				cout << "�� �����Ͽ����ϴ�." << endl;
				stagecount++;
				sw = 0;
			}
		}
	}
}

void Boss::ReverseAttack()
{
	clock_t start, end;
	double result = 0;
	char inputkeyword[20];
	int sw = 1;

	MakeAttackKeyword();

	cout << "������ ������ ���۵Ǿ����ϴ�." << endl;

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
			if (defensekeyword[9-i] != inputkeyword[i])
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
					sw = 0;
					break;
				}
				cout << "�� �����Ͽ����ϴ�." << endl;
				stagecount++;
				sw = 0;
			}
		}
	}
}

void Boss::StunAttack()
{
	clock_t start, end;
	double result = 0;
	char inputkeyword[20];
	int sw = 1;

	MakeAttackKeyword();

	cout << "���� ������ ���۵Ǿ����ϴ�." << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << defensekeyword[i];
	}
	cout << endl;
	while (sw)
	{
		start = clock();
		if (result == 0)
		{
			cout << "3�ʰ� ����" << endl;
			Sleep(3000);
		}
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
					sw = 0;
					break;
				}
				cout << "�� �����Ͽ����ϴ�." << endl;
				stagecount++;
				sw = 0;
			}
		}
	}
}
void Boss::OddNumberAttack()
{
	clock_t start, end;
	int i;
	double result = 0;
	int sw = 1;
	int k = 0;
	char inputkeyword[20];
	MakeAttackKeyword();


	cout << "���� ������ Ȧ! ��ų�� �������!" << endl;
	_sleep(1000);
	for (int i = 0; i < 10; i++)
	{
		cout << defensekeyword[i];
	}
	cout << endl;
	while (sw)
	{

		start = clock();
		cin >> inputkeyword;
		for (int i = 0; i < 10; i += 2)
		{
			k = i / 2;

			if (defensekeyword[i] != inputkeyword[k])
			{

				end = clock();
				cout << "��ų �� �����ߴ�!" << endl;

				result += (double)(end - start);
				cout << timelimit - ((int)result) / 1000 << endl;

				if (timelimit - ((int)result) / 1000 < 0)
				{
					cout << "������ ���ݿ� �¾Ҵ�!" << endl;
					sw = 0;
					break;
				}
				break;
			}
			else if (k == 4)
			{
				end = clock();

				cout << "���� ȿ�����̾���! " << endl;
				result += (double)(end - start);
				cout << timelimit - ((int)result) / 1000 << endl;

				if (timelimit - ((int)result) / 1000 < 0)
				{
					cout << "������ ���ݿ� �¾Ҵ�!" << endl;
					sw = 0;
					break;
				}

				stagecount++;
				sw = 0;

			}
		}


	}
}

void Boss::EvenNumberAttack()
{
	clock_t start, end;
	int i;
	double result = 0;
	int sw = 1;
	int k = 0;
	char inputkeyword[20];
	MakeAttackKeyword();


	cout << "���� ������ ¦! ��ų�� �������!" << endl;
	_sleep(1000);
	for (int i = 0; i < 10; i++)
	{
		cout << defensekeyword[i];
	}
	cout << endl;
	while (sw)
	{

		start = clock();
		cin >> inputkeyword;
		for (int i = 1; i < 10; i += 2)
		{
			k = (i - 1) / 2;

			if (defensekeyword[i] != inputkeyword[k])
			{

				end = clock();
				cout << "��ų �� �����ߴ�!" << endl;

				result += (double)(end - start);
				cout << timelimit - ((int)result) / 1000 << endl;

				if (timelimit - ((int)result) / 1000 < 0)
				{
					cout << "������ ���ݿ� �¾Ҵ�!" << endl;
					sw = 0;
					break;
				}
				break;
			}
			else if (k == 4)
			{
				end = clock();

				cout << "���� ȿ�����̾���! " << endl;
				result += (double)(end - start);
				cout << timelimit - ((int)result) / 1000 << endl;

				if (timelimit - ((int)result) / 1000 < 0)
				{
					cout << "������ ���ݿ� �¾Ҵ�!" << endl;
					sw = 0;
					break;
				}

				stagecount++;
				sw = 0;

			}
		}


	}
}
void Boss::BossAttack()
{
	int i;
	srand((unsigned int)time(NULL));
	for (int j = 0; j < attacknumber;j++)
	{
		i =  rand() % 5;
		switch (i) 
		{
		case 0:
			StunAttack();
			break;
		case 1:
			NormalAttack();
			break;
		case 2:
			ReverseAttack();
			break;
		case 3:
			OddNumberAttack();
			break;
		case 4:
			EvenNumberAttack();
			break;
		}
	}
}