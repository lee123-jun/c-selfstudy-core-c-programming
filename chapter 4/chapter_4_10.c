#include <stdio.h>
int main(void)
{
	double hour;
	int day;
	int min;
	printf("���� �ҿ�ð�(�ð�)? ");
	scanf("%lf",&hour); 
	
	day = hour/24;
	min = 60 * (hour - (int)hour);
	hour = (int)hour%24;
	 
	printf("���� �ҿ�ð��� %d�� %d�ð� %d���Դϴ�.",day,(int)hour,min);
	
	
	
	
	return 0;
}
