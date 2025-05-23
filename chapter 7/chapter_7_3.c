#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ARR_SIZE 10

void find_max_min(int num[], int cnt){
	int i;
	int max = 0, min = 1000;
		
	for(i = 0; i < 10; i++){
		if(max < num[i]){
			max = num[i];
		}
	}
	
	for(i = 0; i < 10; i++){
		if(min > num[i]){
			min = num[i];
		}
	}
	
	printf("\n최대값: %d\n",max);
	printf("최소값: %d\n",min);	
}

void random(int num[],int cnt){
	int i, random;
	printf("배열: ");
	for(i = 0; i < cnt; i++){
		random = rand() % 100; //0 ~ 99사이의 난수 생성 
		num[i] = random;
		printf("%d ",num[i]);
	}
}

int main(){
	
	srand((unsigned int)time(0));
	
	int num[ARR_SIZE];
	
	random(num, ARR_SIZE);
	find_max_min(num,ARR_SIZE);
	
	return 0;
}
