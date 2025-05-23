#include <stdio.h>
typedef struct product{
	char name[20];
	int price;
	int stock;
	int order;
}PRODUCT; 

void order(PRODUCT *pt){
	if(pt->stock < pt->order){
		printf("재고가 부족합니다.\n");
	}
	else{
		printf("결제 금액: %d 재고: %d\n",(pt->price)*(pt->order),(pt->stock)-(pt->order));
	}
}

int main(void){
	int i = 0;
	PRODUCT arr[3] = {{"",0,0},};
	
	printf("제품명? ");
	scanf("%s",arr[i].name);
	getchar();
	printf("가격? ");
	scanf("%d",&arr[i].price);
	getchar();
	printf("재고? ");
	scanf("%d",&arr[i].stock);
	getchar();
	
	while(1){
	printf("주문수량? ");
	scanf("%d",&arr[i].order);
	getchar();
	if(arr[i].order == 0){
		break;
	}
	
	while(i <= 3){
		order(&arr[i]);
		break;
	}
	
	i++;
  }
	return 0;
}
