#include <stdio.h> //������ 202122852 
void get_perimeter(int garo, int sero){
	
	printf("���簢���� �ѷ�: %d",garo * 2 + sero * 2);
	
}

int main(void){
	
	int garo;
	int sero;
	 
	printf("����? ");	
	scanf("%d",&garo);	
	printf("����? ");		
	scanf("%d",&sero);
	
	get_perimeter(garo,sero);
	return 0;
}
