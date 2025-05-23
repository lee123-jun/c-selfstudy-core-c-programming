#include <stdio.h>
int main(void)
{
	double street;
	double speed;
	int time; 
	printf("이동 거리(km)? ");
	scanf("%lf",&street);
	printf("예상 속력(km/h)? ");
	scanf("%lf",&speed);
	time = street / speed * 60;
	printf("도착까지 예상 소요 시간은 %d분입니다.",time);
	
	return 0;
}
