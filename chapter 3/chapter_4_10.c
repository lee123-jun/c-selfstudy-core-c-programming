#include <stdio.h>
int main(void)
{
	double hour;
	int day;
	int min;
	printf("비행 소요시간(시간)? ");
	scanf("%lf",&hour); 
	
	day = hour/24;
	min = 60 * (hour - (int)hour);
	hour = (int)hour%24;
	 
	printf("비행 소요시간은 %d일 %d시간 %d분입니다.",day,(int)hour,min);
	
	
	
	
	return 0;
}
