#include <stdio.h> //이혜준 202122852 
void get_rect_info(int garo, int sero, int *base, int *circumference){	
	*base = garo * sero;
	*circumference = (garo * 2) + (sero * 2);
}

int main(void){
	
	int garo;
	int sero;
	int base; //넓이
	int circumference;//둘레	 
	 
	printf("가로? ");	
	scanf("%d",&garo);	
	printf("세로? ");		
	scanf("%d",&sero);
	
	get_rect_info(garo,sero,&base,&circumference);
	
	printf("넓이: %d, 둘레: %d",base,circumference);
	return 0;
}
