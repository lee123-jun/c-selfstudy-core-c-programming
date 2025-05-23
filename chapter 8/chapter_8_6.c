#include <stdio.h>
void get_min_max(int *arr,int size){
	int i;
	int max = 0, min = 1000;
	for(i = 0; i < size; i++){
		if(max < arr[i]){
			max = arr[i];
		}
		if(min > arr[i]){
			min = arr[i];
		}
	}
	printf("\n최대값: %d\n최소값: %d\n",max,min);
}

int main(void){
	
	int arr[10]	 = {23, 45, 62, 12, 99, 83, 23, 50, 72, 37};
	int size;
	int i;
	
	size = sizeof(arr)/ sizeof(int);
	printf("배열: ");
	for(i = 0; i < size; i++){
		printf("%d ",arr[i]);
	}
	get_min_max(arr,size);

	return 0;
}
