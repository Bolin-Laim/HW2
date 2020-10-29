#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float hoursworked, hourlyrate, salary;
	while (1)
	{
		printf("Enter # of hours worked (-1 to end):");
		scanf_s("%f", &hoursworked);
		if (hoursworked == -1)
			break;
		printf("Enter hourly rate of the worker (¢C00.00):");
		scanf_s("%f", &hourlyrate);
		if (hoursworked > 40)
		{
			salary = hourlyrate * hoursworked + hourlyrate / 2;
		}
		else
		{
			salary = hourlyrate * hoursworked;
		}
		printf("Salary is ¢C%.2f\n\n", salary);
	}
	return 0;

}