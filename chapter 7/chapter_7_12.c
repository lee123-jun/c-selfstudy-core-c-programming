#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 10 

void random(char arr[],int cnt){ //�������� ä���� �ڸ��� �� �ڸ��� ���� 
	int i;
	srand(time(0));	
	
	for(i = 0; i < cnt; i++){
		arr[i] = rand() % 10; //0 ~ 9������ ���� ����  
		if(arr[i] >= 0 && arr[i] < 5) // ���ڸ� = O, ä���� �ڸ� = X 
			arr[i] = 'O';
		else{
			arr[i] = 'X';
		} 	
	}
}

int main(void){
	
	srand(time(0));	//���� �õ� ���� 
	
	char seat[N];
	int i;
	int reservation;
	
	random(seat,N);
	printf("���� �¼�: [");
	for(i = 0; i < N; i++){
		printf(" %c ",seat[i]);
	}
	printf("]");
		
	printf("\n������ �¼���? ");
	scanf("%d",&reservation); 
	
	for(i = 0; i < N; i++){ // seat[i]�� X�� �ǳʶ� 
		if(seat[i] == 'X'){ 
			continue;
		}
		printf("%d ",i+1);	
		reservation--;
		if(reservation == 0){
			break;
		}
	}
	printf("�� �¼��� �����߽��ϴ�.");
	
	
	return 0;
}
