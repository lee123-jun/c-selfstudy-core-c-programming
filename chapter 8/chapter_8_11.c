#include <stdio.h> //������ 202122852 
void get_rect_info(int garo, int sero, int *base, int *circumference){	
	*base = garo * sero;
	*circumference = (garo * 2) + (sero * 2);
}

int main(void){
	
	int garo;
	int sero;
	int base; //����
	int circumference;//�ѷ�	 
	 
	printf("����? ");	
	scanf("%d",&garo);	
	printf("����? ");		
	scanf("%d",&sero);
	
	get_rect_info(garo,sero,&base,&circumference);
	
	printf("����: %d, �ѷ�: %d",base,circumference);
	return 0;
}
