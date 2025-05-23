#include <stdio.h>
#define INCH 2.54
int main(void)
{
	double inch;
	printf("±Ê¿Ã(inch)? ");
	scanf("%lf",&inch);
	printf("%.6lf inch = %.6lf cm",inch,inch*INCH);
	
	return 0;
}
