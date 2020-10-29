#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j, n;
	printf("(A)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j <= i)
				printf("%s", "*");
		}
		printf("\n");
	}
	//---------------------------------------
	printf("(B)\n");
	n = 9;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j <= n)
				printf("%s", "*");
			
		}
		printf("\n");
		n--;
	}
	//---------------------------------------
	printf("(C)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j+1 <= i)
			{
				printf(" ");
			}
			else
			{
				printf("%s", "*");
			}	
		}
		printf("\n");
	}
	//---------------------------------------
	printf("(D)\n");
	n = 9;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j <= n-1)
			{
				printf(" ");
			}
			else
			{
				printf("%s", "*");
			}
		}
		printf("\n");
		n--;
	}

	system("pause");
	return 0;
}