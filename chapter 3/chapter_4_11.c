#include <stdio.h>
int main(void)
{
	int orignal_price;
	double sale;
	int discount_price;
	int final_price;
	printf("��ǰ�� ����? ");
	scanf("%d",&orignal_price); 
	printf("������(%%)? "); 
	scanf("%lf",&sale);
	discount_price = orignal_price * (sale / 100);
	final_price = orignal_price - discount_price;
	printf("���ΰ� : %d�� (%d ����)", final_price , discount_price);
}
