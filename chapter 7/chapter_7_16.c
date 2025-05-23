#include <stdio.h>
#include <time.h>
#include <stdlib.h>	
#define N 10
void random_num(int arr[], int cnt){
	
	srand(time(0));
	int i;
	for(i = 0; i < cnt; i++){
		arr[i] = (rand() % 100) + 1; // 1 ~ 100 사이의 난수 생성		
	}
	for(i = 0; i < cnt; i++){
		printf("%2d ", arr[i]);
	}
	
}

int main(void){
			
	int arr[N];
	int num, index, i;
	
	random_num(arr,N);
	
	printf("\n찾을 값? "); 
	scanf("%d",&num);
	
	for(i = 0; i < N; i++){
		if(arr[i] == num){
			index = i;
		}
	}
	printf("%d는 %d번째 원소입니다.",num,index);

	return 0;
}
