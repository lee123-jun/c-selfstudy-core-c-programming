#include <stdio.h>
typedef struct product{
	char name[20];
	int price;
	int stock;
}PRODUCT;  

void print_product(PRODUCT *pt){
	printf("[%s %d�� ��� : %d]\n",pt->name,pt->price,pt->stock);
}

int main(void){
	int i = 0;
	PRODUCT arr[3] = {{"",0,0},};
	
	while(1){

	printf("��ǰ��? ");
	scanf("%s",arr[i].name);
	getchar();
	printf("����? ");
	scanf("%d",&arr[i].price);
	getchar();
	printf("���? ");
	scanf("%d",&arr[i].stock);
	getchar();
	
	while(i <= 3){
		print_product(&arr[i]);
		break;
	}
	
	i++;
  }
	return 0;
}
