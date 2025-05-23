#include <stdio.h> //이혜준 202122852 
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
	
	printf(" 0 ~ 99사이의 임의의 정수를 10개 생성해서 합계를 구합니다.\n");
	
	printf("\n합계: %d",random());
	return 0;
} 
