#include <stdio.h>
int main(void)
{
	int sec,min,hour;
	printf("재생시간(초)? ");
	scanf("%d",&sec);
	
	min = sec/60;
	hour = min/60;
	sec = sec%60;
	min = min%60;
	
	sec == 0? printf("재생시간은 %d시간 %d분입니다.",hour,min):printf("");
	min == 0? printf("재생시간은 %d시간 %d초입니다.",hour,sec):printf("");
	hour == 0? printf("재생시간은 %d분 %d초입니다.",min,sec):printf("");
	sec && min && hour != 0? printf("재생시간은 %d시간 %d분 %d초입니다.",hour,min,sec): printf("");
	return 0;
}
