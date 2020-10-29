#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (i<4)
			{
				if ((j < 4-i) || (j > 4+i))
				{
					printf(" ");
				}
				else
				{
					printf("*");
				}
			}
			else if (i==4)
			{
				printf("*");
			}
			else
			{
				if ((j < i-4) || (j > 12-i))
				{
					printf(" ");
				}
				else
				{
					printf("*");
				}
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}