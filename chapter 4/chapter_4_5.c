#include <stdio.h>
#define PI 3.141592
//이번에는 정수로 시작녀 
int main(void)
{
	int radius;
	int height;
	printf("반지름의 길이? ");
	scanf("%d",&radius); 
	printf("높이? ");
	scanf("%d",&height);
	printf("원기둥의 부피 : %.6lf",(radius * radius) * PI * height); 
	return 0;
}
