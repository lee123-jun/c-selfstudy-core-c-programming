#include <stdio.h>
int main(void)
{
	double f;
	printf("½Ç¼ö? ");
	scanf("%lf",&f);
	printf("Á¦°ö: %e\n",f*f);	
	printf("¼¼Á¦°ö: %e\n",f*f*f);
	return 0;
}
