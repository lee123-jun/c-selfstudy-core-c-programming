#include <stdio.h>
int main(void){
	
	int price[5], i;
	int sale;
	int sale_price; 
	printf("��ǰ�� 5���� �Է��ϼ���: \n");
	for(i = 0; i < 5; i++){
		scanf("%d",&price[i]);
	}
	printf("������(%%)? ");
	scanf("%d",&sale);
	
	for(i = 0; i < 5; i++){
		sale_price = price[i] - price[i] * (sale/100.0);
		printf("����: %5d --> ���ΰ�: %5d\n",price[i],sale_price);	
	}
	
	return 0;
}
