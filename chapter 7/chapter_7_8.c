#include <stdio.h>
int main(void){
	
	int price[5], i;
	int sale;
	int sale_price; 
	printf("상품가 5개를 입력하세요: \n");
	for(i = 0; i < 5; i++){
		scanf("%d",&price[i]);
	}
	printf("할인율(%%)? ");
	scanf("%d",&sale);
	
	for(i = 0; i < 5; i++){
		sale_price = price[i] - price[i] * (sale/100.0);
		printf("가격: %5d --> 할인가: %5d\n",price[i],sale_price);	
	}
	
	return 0;
}
