#include <stdio.h>
int main(void)
{
	
	int won;
	double exchangeRate;  
	printf("KRW? ");
	scanf("%d",&won);
	printf("원/달러 환율? ");
	scanf("%lf",&exchangeRate);
	printf("KRW %d = USD %.2lf",won,won / exchangeRate);
	
	return 0;
}
