#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void rand_array(int *arr,int size){
	int i, cnt;
	
	cnt = rand() % 10; 
	
	printf("count = %d\n",cnt);
	
	while(cnt != 0){
		
	for(i = 0; i < size; i++){
		arr[i] = rand() % 100;
	}
	
	for(i = 0; i < size; i++){
		printf("%d ",arr[i]);		
	}
	printf("\n");
	cnt--;
  }
}

int main(void){
	
	srand(time(0));
	
	int arr[10] = {0};
	int size;
	int i, j;
	
	size = sizeof(arr)/ sizeof(int);
	
	rand_array(arr,size);	
	
	return 0;
}
