#include <stdio.h>
typedef struct product{
	char name[20];
	int price;
	int stock;
	int order;
}PRODUCT; 

void print_menu(PRODUCT *pt){
	printf("[%s %d원 재고: %d]\n",pt->name,pt->price,pt->stock);
}

int main(void){
	
	int i = 0,input_cnt = 0,cnt = 0;
	PRODUCT arr[5] = {{"",0,0},};
	
	while(1){
		printf("제품명? ");
		scanf("%s",arr[i].name);
		getchar();
		if(*arr[i].name == '.'){
			while(cnt <= i-1){ // i = 1
				print_menu(&arr[cnt]);
				cnt++;
			}
			return 0;
		}
		printf("가격 재고? ");
		scanf("%d %d",&arr[i].price,&arr[i].stock);
		getchar();
		input_cnt++;
		
		if(input_cnt == 4){
			while(i < 5){
				print_menu(&arr[i]);
				i++;
			}
			break;
		}
		i++;
	}//while  
	
	
	return 0;
}
