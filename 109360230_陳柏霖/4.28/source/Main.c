#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int code;
	float weeksalary, workhours, weeklysales, produce, salary, money;

	printf("輸入薪資代碼：");
	scanf_s("%d", &code);
	switch (code)
	{
	case 1:
		printf("經理人員週薪：");
		scanf_s("%f", &weeksalary);
		break;
	case 2:
		printf("輸入工作時數：");
		scanf_s("%f", &workhours);
		printf("輸入時薪：");
		scanf_s("%f", &money);
		if (workhours > 40)
		{
			salary = (workhours - 40)*money*1.5 + 40 * money;
		}
		else
		{
			salary = workhours * money;
		}
		printf("時薪工週薪為$%.2f", salary);
		break;
	case 3:
		printf("輸入銷售額：");
		scanf_s("%f", &weeklysales);
		salary = 250 + weeklysales * 0.057;
		printf("抽佣金工週薪為$%.2f", salary);
		break;
	case 4:
		printf("輸入產品製作數：");
		scanf_s("%f", &produce);
		printf("輸入每個產品計酬：");
		scanf_s("%f", &money);
		salary = produce * money;
		printf("零工週薪為$%.2f", salary);
		break;
	}
	system("pause");
	return 0;
}