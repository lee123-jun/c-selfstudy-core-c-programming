#include <stdio.h>
int main(void)
{
	double mass;
	int speed;
	printf("����(kg)? ");
	scanf("%lf",&mass);
	printf("�ӷ�(m/s)? ");
	scanf("%d",&speed);
	printf("�������: %.2lf J",mass * (speed * speed) / 2);
	
	return 0;
}
