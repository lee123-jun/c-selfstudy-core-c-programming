#include <stdio.h>
int main(void)
{
	
	int won;
	double exchangeRate;  
	printf("KRW? ");
	scanf("%d",&won);
	printf("��/�޷� ȯ��? ");
	scanf("%lf",&exchangeRate);
	printf("KRW %d = USD %.2lf",won,won / exchangeRate);
	
	return 0;
}
