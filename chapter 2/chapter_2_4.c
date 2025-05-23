#include <stdio.h>
int main(void)
{
	double N,m;
	printf("힘(N)? ");
	scanf("%lf",&N);
	printf("이동거리(m)? ");
	scanf("%lf",&m);
	printf("일의 양: %.2lf J",N*m);
	
	return 0;
}
