#include <stdio.h>
void reverse_array(double *arr, int size){
	int i;
	printf("\n역순: ");
	
	for(i = size - 1; i >= 0; i--){
		printf("%.1lf ",arr[i]);
	}
}

int main(void){
	
	double arr[10] = {1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8};
	int i, size;
	
	size = sizeof(arr)/ sizeof(double);
	printf("배열: ");
	for(i = 0; i < size; i++){
		printf("%.1lf ",arr[i]); 
	}	
	
	reverse_array(arr,size);
	
	return 0;
}
