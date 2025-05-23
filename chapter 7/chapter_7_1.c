#include <stdio.h>
int main(void){
	
	int num , i;
	int lsq[10] = {0};
	
	printf("첫 번째 항? ");
	scanf("%d",&lsq[0]);
	printf("공차? ");
	scanf("%d",&num);
	
	for(i = 1; i < 10; i++){
		lsq[i] = lsq[0] + (num * i);
	}
	
	printf("등차수열: ");
	for(i = 0; i < 10; i++){
		printf("%d ",lsq[i]); 
	}
	return 0;
}
