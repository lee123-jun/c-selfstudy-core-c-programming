#include <stdio.h>
int main(void)
{
	double menstruume; //용매
	double solute; //용질
	printf("용매(g)? "); 
	scanf("%lf",&menstruume);
	printf("용질(g)? "); 
	scanf("%lf",&solute);
	printf("농도: %.2lf %%",(solute / (menstruume + solute)) * 100); 
	return 0;
}
