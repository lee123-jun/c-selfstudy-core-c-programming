#include <stdio.h>
int main(void)
{
	int weight = 0;
	int h = 0;
	
	printf("����(kg)? ");
	scanf("%d",&weight);
	printf("����(m)? ");
	scanf("%d",&h);
	printf("��ġ������: %lf",9.8*weight*h);
	return 0;	
}
