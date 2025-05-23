#include <stdio.h>
int main(void)
{
	int weight = 0;
	int h = 0;
	
	printf("질량(kg)? ");
	scanf("%d",&weight);
	printf("높이(m)? ");
	scanf("%d",&h);
	printf("위치에너지: %lf",9.8*weight*h);
	return 0;	
}
