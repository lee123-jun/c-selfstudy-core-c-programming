#include <stdio.h>
int main(void){
	
	int num , i;
	int lsq[10] = {0};
	
	printf("ù ��° ��? ");
	scanf("%d",&lsq[0]);
	printf("����? ");
	scanf("%d",&num);
	
	for(i = 1; i < 10; i++){
		lsq[i] = lsq[0] + (num * i);
	}
	
	printf("��������: ");
	for(i = 0; i < 10; i++){
		printf("%d ",lsq[i]); 
	}
	return 0;
}
