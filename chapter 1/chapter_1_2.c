#include <stdio.h>
int main(void)
{
	char mon[20];
	float hakjum;
	
	printf("이름? ");
	scanf("%s",mon);
	printf("학점? ");
	scanf("%f",&hakjum);
	printf("%s의 학점은 %f입니다.",mon,hakjum); 
	
	
	
	
	
	return 0;
}
