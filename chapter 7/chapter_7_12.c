#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 10 

void random(char arr[],int cnt){ //랜덤으로 채워진 자리와 빈 자리를 만듦 
	int i;
	srand(time(0));	
	
	for(i = 0; i < cnt; i++){
		arr[i] = rand() % 10; //0 ~ 9까지의 난수 생성  
		if(arr[i] >= 0 && arr[i] < 5) // 빈자리 = O, 채워진 자리 = X 
			arr[i] = 'O';
		else{
			arr[i] = 'X';
		} 	
	}
}

int main(void){
	
	srand(time(0));	//난수 시드 생성 
	
	char seat[N];
	int i;
	int reservation;
	
	random(seat,N);
	printf("현재 좌석: [");
	for(i = 0; i < N; i++){
		printf(" %c ",seat[i]);
	}
	printf("]");
		
	printf("\n예매할 좌석수? ");
	scanf("%d",&reservation); 
	
	for(i = 0; i < N; i++){ // seat[i]가 X면 건너뜀 
		if(seat[i] == 'X'){ 
			continue;
		}
		printf("%d ",i+1);	
		reservation--;
		if(reservation == 0){
			break;
		}
	}
	printf("번 좌석을 예매했습니다.");
	
	
	return 0;
}
