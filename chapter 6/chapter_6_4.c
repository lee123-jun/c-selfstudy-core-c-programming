#include <stdio.h>

double discount_price(double sale,int price)
{
	int discount_price = price - (price * sale * 0.01);
	printf("���ΰ�: %d\n",discount_price);
}


int main(void)
{
	int price;
	double sale;
	
	printf("������(%%)? ");
	scanf("%lf",&sale);
	while(1)
	{
		printf("��ǰ�� ����? "); 
		scanf("%d",&price);
		if(price == 0)
		{
			break;
		}
		discount_price(sale,price);
	}

	return 0;
}
