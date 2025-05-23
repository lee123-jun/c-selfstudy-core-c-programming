#include <stdio.h>
void zero_array(int arr[], int cnt){
	int i;
	for(i = 0; i < cnt; i++){
		arr[i] = 0;
	}
	for(i = 0; i< cnt; i++){
		printf("%d ",arr[i]);
	}
}

int main(void){
	
	int arr[10];
	
	zero_array(arr, 10);	
	
	return 0;
}
