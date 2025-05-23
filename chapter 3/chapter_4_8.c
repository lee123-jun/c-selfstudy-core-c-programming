#include <stdio.h>
#include <math.h>
#define PI 3.141592
int main(void)
{
	double radius = 0;
	double volume = 0;
	printf("반지름의 길이? ");
	scanf("%lf",&radius);
	volume = (4.0)/3 * PI * radius * radius * radius;
	printf("구의 부피: %lf",volume); 
	return 0;
}
