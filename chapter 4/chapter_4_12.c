#include <stdio.h>
int main(void)
{
	double street;
	double speed;
	int time; 
	printf("�̵� �Ÿ�(km)? ");
	scanf("%lf",&street);
	printf("���� �ӷ�(km/h)? ");
	scanf("%lf",&speed);
	time = street / speed * 60;
	printf("�������� ���� �ҿ� �ð��� %d���Դϴ�.",time);
	
	return 0;
}
