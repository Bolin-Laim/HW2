#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j, l, d;
	printf("¿é¤Jªø¡G");
	scanf_s("%d", &l);
	printf("¿é¤J¼e¡G");
	scanf_s("%d", &d);
	for (i = 0; i < d; i++)
	{
		for (j = 0; j < l; j++)
		{
			if ((i == 0) || (j == 0) || (j == l-1) || (i == d-1))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}