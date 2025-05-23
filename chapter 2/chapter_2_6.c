#include <stdio.h>
#define P 0.3025
int main(void)
{
	double m;
	printf("아파트의 면적(제곱미터)? ");	
	scanf("%lf",&m);
	printf("%.2lf 제곱미터 = %.2lf 평",m,m*P);
	return 0;
}
