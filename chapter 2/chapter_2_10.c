#include <stdio.h>
int main(void)
{
	double dollar;
	double exchangeRate;  
	printf("USD? ");
	scanf("%lf",&dollar);
	printf("원/달러 환율? ");
	scanf("%lf",&exchangeRate);
	printf("USD %.2lf = KRW %.2lf",dollar,exchangeRate * dollar);
	
	return 0;
}
