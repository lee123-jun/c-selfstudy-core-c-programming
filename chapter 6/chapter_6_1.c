#include <stdio.h> //이혜준 202122852 
void get_perimeter(int garo, int sero){
	
	printf("직사각형의 둘레: %d",garo * 2 + sero * 2);
	
}

int main(void){
	
	int garo;
	int sero;
	 
	printf("가로? ");	
	scanf("%d",&garo);	
	printf("세로? ");		
	scanf("%d",&sero);
	
	get_perimeter(garo,sero);
	return 0;
}
