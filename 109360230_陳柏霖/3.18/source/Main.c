#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float salesdollars, salary;
	
	while (1)
	{
		printf("Enter sales in dollars (-1 to end):");
		scanf_s("%f", &salesdollars);
		if (salesdollars == -1)
			break;
		salary = 200 + salesdollars * 0.09;
		printf("Salary is:%.2f\n\n", salary);
	}

	return 0;

}