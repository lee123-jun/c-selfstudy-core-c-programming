#include <stdio.h>
void swap_array(int *a, int *b){
	int i;
	int temp[10] = {0};
	
	for(i = 0; i < 10; i++){
		temp[i] = a[i];
		a[i] = b[i];
		b[i] = temp[i];
	}
		
}


int main(void){
	
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int b[10] = {11,12,13,14,15,16,17,18,19,20};
	int i;
		printf("a: ");
	for(i = 0; i < 10; i++){
		printf("%2d ",a[i]);
	}
	printf("\n");
	printf("b: ");
	for(i = 0; i < 10; i++){
		printf("%2d ",b[i]);
	}
	printf("\n");
	swap_array(a,b);
	
	printf("<< swap_array È£Ãâ ÈÄ >>\n");
	
	printf("a: ");
	for(i = 0; i < 10; i++){
		printf("%2d ",a[i]);
	}
	printf("\n");
	printf("b: ");
	for(i = 0; i < 10; i++){
		printf("%2d ",b[i]);
	}
	
	return 0;
}
