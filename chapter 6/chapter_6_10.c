#include <stdio.h> //������ 202122852 
#include <stdlib.h>
#include <time.h>
int random(){
	
	int i, random, sum = 0;
	
	for(i = 0; i < 10; i++){
		random = rand() % 100;
		printf("%2d ",random);
		sum += random;
	}
	
	return sum;
}

int main(void){
	
	srand((unsigned int)time(0));
	
	printf(" 0 ~ 99������ ������ ������ 10�� �����ؼ� �հ踦 ���մϴ�.\n");
	
	printf("\n�հ�: %d",random());
	return 0;
} 
