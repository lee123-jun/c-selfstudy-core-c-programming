#include <stdio.h> //������ 202122852  
#include <time.h>
#include <stdlib.h>
void random_array(int arr[]){
	int i;
	for(i = 0; i < 10; i++){
		arr[i] = rand() % 100; // 0 ~ 99������ ���� 
		printf("%d ",arr[i]);
	}
} 

void shuffle_array(int a[]){
	int i = 0; //while�� ������� �ʱ�ȭ 
	int random, temp;
	for(i = 0; i < 9; i++){
		
		random = rand() % (10 - i) + i;
		temp = a[i];
		a[i] = a[random];
		a[random] = temp;
	}

}

void print_array(int arr[]){
	int i;
	for(i = 0; i < 10; i++){
		printf("%d ",arr[i]);
	} 	
}

int main(void){
	
	srand((unsigned int)time(NULL));
	
	int arr[10] = {0,};
	
	printf("���� ��:");
	random_array(arr);
	
	printf("\n���� ��:");		
	shuffle_array(arr);
	print_array(arr);	
	return 0;
}
