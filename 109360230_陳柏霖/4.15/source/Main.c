#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	float principal, rate, interest, n;
	principal = 5000.00;
	n = 15;
	for (rate = 10.0; rate < 12.5; rate += 0.5)
	{
		printf("rate:%.1f\%%\n", rate);
		interest = principal * pow(1 + (rate*0.01), n);
		printf("interest:%.2f\n\n", interest);
	}
	system("pause");
	return 0;
}