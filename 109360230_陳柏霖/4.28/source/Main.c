#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int code;
	float weeksalary, workhours, weeklysales, produce, salary, money;

	printf("��J�~��N�X�G");
	scanf_s("%d", &code);
	switch (code)
	{
	case 1:
		printf("�g�z�H���g�~�G");
		scanf_s("%f", &weeksalary);
		break;
	case 2:
		printf("��J�u�@�ɼơG");
		scanf_s("%f", &workhours);
		printf("��J���~�G");
		scanf_s("%f", &money);
		if (workhours > 40)
		{
			salary = (workhours - 40)*money*1.5 + 40 * money;
		}
		else
		{
			salary = workhours * money;
		}
		printf("���~�u�g�~��$%.2f", salary);
		break;
	case 3:
		printf("��J�P���B�G");
		scanf_s("%f", &weeklysales);
		salary = 250 + weeklysales * 0.057;
		printf("������u�g�~��$%.2f", salary);
		break;
	case 4:
		printf("��J���~�s�@�ơG");
		scanf_s("%f", &produce);
		printf("��J�C�Ӳ��~�p�S�G");
		scanf_s("%f", &money);
		salary = produce * money;
		printf("�s�u�g�~��$%.2f", salary);
		break;
	}
	system("pause");
	return 0;
}