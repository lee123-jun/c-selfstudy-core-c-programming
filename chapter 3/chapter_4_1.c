#include <stdio.h>
int main(void)
{
	double mass;
	int speed;
	printf("질량(kg)? ");
	scanf("%lf",&mass);
	printf("속력(m/s)? ");
	scanf("%d",&speed);
	printf("운동에너지: %.2lf J",mass * (speed * speed) / 2);
	
	return 0;
}
