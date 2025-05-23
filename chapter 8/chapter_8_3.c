#include <stdio.h>
int main(void){
	
	
	int arr[10] = {44, 32, 65, 23, 45, 76, 77, 89, 23, 45};
	int *p = arr;
	int i;
	
	printf("배열 : ");
	for(i = 0; i < 10; i++){
		printf("%d ",p[i]); 
	}
	
	printf("역순 : ");
	for(i = 9; i <= 0; i--){
		printf("%d ",p[i]);
	}
		
	
	return 0;
}
