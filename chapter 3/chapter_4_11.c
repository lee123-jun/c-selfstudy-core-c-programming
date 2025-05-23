#include <stdio.h>
int main(void)
{
	int orignal_price;
	double sale;
	int discount_price;
	int final_price;
	printf("제품의 가격? ");
	scanf("%d",&orignal_price); 
	printf("할인율(%%)? "); 
	scanf("%lf",&sale);
	discount_price = orignal_price * (sale / 100);
	final_price = orignal_price - discount_price;
	printf("할인가 : %d원 (%d 할인)", final_price , discount_price);
}
