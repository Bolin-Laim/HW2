#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int account;
	float balance, totalcharges, totalcredits, creditlimit, newbalance;
	while (1)
	{
		printf("Enter account number (-1 to end):");
		scanf_s("%d", &account);
		if (account == -1)
			break;
		printf("Enter beginning balance:");
		scanf_s("%f", &balance);
		printf("Enter total charges:");
		scanf_s("%f", &totalcharges);
		printf("Enter total credits:");
		scanf_s("%f", &totalcredits);
		printf("Enter credit limit:");
		scanf_s("%f", &creditlimit);

		newbalance = balance + totalcharges - totalcredits;

		printf("Account:\t%d\n", account);
		printf("Credit limit:   %.2f\n", creditlimit);
		printf("Balance:\t%.2f\n", newbalance);

		if (newbalance > creditlimit)
			printf("Credit Limit Exceeded.\n");
		printf("\n");
	}
	return 0;
}