#include <stdio.h>
void arith_seq(int *num,int size,int c_d){
	int i;
	printf("등차수열: ");
	for(i = 0; i < size; i++){
		num[i + 1] = num[0 + i] + c_d;
		printf("%d ",num[i]);
	}
}

int main(void){
	
	int num[10] = {0,}; //첫번째 항
	int size;
	int c_d; //공차
	
	size = sizeof(num)/ sizeof(int);
	printf("첫 번째 항? ");
	scanf("%d",&num[0]);
	printf("공차?  "); 
	scanf("%d",&c_d);
	
	arith_seq(num,size,c_d);
	return 0;
}
