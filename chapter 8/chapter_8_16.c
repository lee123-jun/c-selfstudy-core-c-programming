#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void sort_array_with_order(int *arr, int cnt){
	int i,j;
	int temp; 
	for(i = 0; i < cnt; i++){ //�������� 
		for(j = i + 1; j <= cnt; j++){
			if(arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	printf("\n�������� ���� ��: ");
	for(i = 0; i < cnt; i++){
		printf("%2d ",arr[i]);
	}
	
	for(i = 0; i < cnt; i++){ //�������� 
		for(j = i + 1; j <= cnt; j++){
			if(arr[i] < arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	printf("\n�������� ���� ��: ");
	for(i = 0; i < cnt; i++){
		printf("%2d ",arr[i]);
	}
	
}
int main(void){
	srand(time(0));
	
	int arr[10] = {0};
	int i, cnt;
	
	cnt = sizeof(arr)/ sizeof(int);
	printf("���� ��: ");
	for(i = 0; i < 10; i++){
		arr[i] = rand() % 100;
		printf("%2d ",arr[i]);
	}
	
	sort_array_with_order(arr,cnt);
	
	return 0;
	
}
