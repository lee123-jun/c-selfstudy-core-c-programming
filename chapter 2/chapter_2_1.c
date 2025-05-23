#include <stdio.h>
int main(void)
{
	int length;
	printf("한 변의 길이? ");
	scanf("%d",&length);
	printf("정사각형의 넓이: %d\n",length * length);
	printf("정사각형의 둘레: %d\n",length * 4);
	
	return 0;
}
