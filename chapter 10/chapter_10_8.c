#include <stdio.h>
typedef struct product{
	char name[20];
	int price;
	int stock;
}PRODUCT;  

void print_product(PRODUCT *pt){
	printf("[%s %d원 재고 : %d]\n",pt->name,pt->price,pt->stock);
}

int main(void){
	int i = 0;
	PRODUCT arr[3] = {{"",0,0},};
	
	while(1){

	printf("제품명? ");
	scanf("%s",arr[i].name);
	getchar();
	printf("가격? ");
	scanf("%d",&arr[i].price);
	getchar();
	printf("재고? ");
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
