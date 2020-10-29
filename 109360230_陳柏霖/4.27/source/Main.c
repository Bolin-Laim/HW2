#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	int i, j, k, n;
	n = 0;
	printf("²¦¦¡©w²z:\n");
	for (i = 1; i <= 500; i++)
	{
		for (j = 1; j <= 500; j++)
		{
			for (k = 1; k <= 500; k++)
			{
				if (pow(i, 2) == pow(j, 2) + pow(k, 2))
				{
					printf("%d %d %d\n", i, j, k);
				}
			}
		}
	}
	system("pause");
	return 0;
}