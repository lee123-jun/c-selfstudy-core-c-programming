#include <stdio.h>
typedef struct product{
	char name[20];
	int price;
	int stock;
	int order;
}PRODUCT; 

void order(PRODUCT *pt){
	if(pt->stock < pt->order){
		printf("��� �����մϴ�.\n");
	}
	else{
		printf("���� �ݾ�: %d ���: %d\n",(pt->price)*(pt->order),(pt->stock)-(pt->order));
	}
}

int main(void){
	int i = 0;
	PRODUCT arr[3] = {{"",0,0},};
	
	printf("��ǰ��? ");
	scanf("%s",arr[i].name);
	getchar();
	printf("����? ");
	scanf("%d",&arr[i].price);
	getchar();
	printf("���? ");
	scanf("%d",&arr[i].stock);
	getchar();
	
	while(1){
	printf("�ֹ�����? ");
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
