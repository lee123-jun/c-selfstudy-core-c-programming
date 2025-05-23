#include <stdio.h>
int main(void)
{
	char size;
	int cup = 0;
	
	printf("커피 사이즈(S,T,G)와 수문 수량?");
	scanf("%c %d",&size,&cup);
	printf("%c 사이즈 %d잔을 주문합니다.",size,cup); 
	
	return 0;
}
