#include <stdio.h>

double discount_price(double sale,int price)
{
	int discount_price = price - (price * sale * 0.01);
	printf("할인가: %d\n",discount_price);
}


int main(void)
{
	int price;
	double sale;
	
	printf("할인율(%%)? ");
	scanf("%lf",&sale);
	while(1)
	{
		printf("제품의 가격? "); 
		scanf("%d",&price);
		if(price == 0)
		{
			break;
		}
		discount_price(sale,price);
	}

	return 0;
}
