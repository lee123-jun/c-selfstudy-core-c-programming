#include <stdio.h>
int main(void)
{
	double Fahrenheit;
	printf("È­¾¾¿Âµµ? ");
	scanf("%lf",&Fahrenheit);
	printf("%.2lf F = %.2lf C",Fahrenheit,(Fahrenheit - 32)/9*5);
	
	return 0;
}
