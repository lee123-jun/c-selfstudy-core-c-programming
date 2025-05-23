#include <stdio.h>
int main(void)
{
	
	int width, colmn;
	printf("가로의 길이?");
	scanf("%d",&width); 
	printf("세로의 길이?");
	scanf("%d",&colmn);
	printf("직사각형의 넓이: %d\n",width * colmn);
	printf("직사각형의 둘래: %d",(width*2) + (colmn*2));
	
	return 0;
}
