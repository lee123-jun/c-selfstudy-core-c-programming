#include <stdio.h>
int main(void)
{
	int sec,min,hour;
	printf("����ð�(��)? ");
	scanf("%d",&sec);
	
	min = sec/60;
	hour = min/60;
	sec = sec%60;
	min = min%60;
	
	sec == 0? printf("����ð��� %d�ð� %d���Դϴ�.",hour,min):printf("");
	min == 0? printf("����ð��� %d�ð� %d���Դϴ�.",hour,sec):printf("");
	hour == 0? printf("����ð��� %d�� %d���Դϴ�.",min,sec):printf("");
	sec && min && hour != 0? printf("����ð��� %d�ð� %d�� %d���Դϴ�.",hour,min,sec): printf("");
	return 0;
}
