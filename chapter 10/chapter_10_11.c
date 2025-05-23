#include <stdio.h>
#include <string.h>

typedef struct product{
	char name[20]; //제품명 
	int price; //가격 
	int stock; //재고  
	int order; //주문수량 
}PRODUCT; 

void order(PRODUCT *pt){
	if(pt->stock < pt->order){
		printf("재고가 부족합니다.\n");
	}
	else{
		pt->stock -= pt->order;
		printf("결제 금액: %d %s 재고: %d\n",(pt->price)*(pt->order),pt->name,pt->stock);
	}
}

void print_menu(PRODUCT *pt){
	printf("[%s %d원 재고: %d]\n",pt->name,pt->price,pt->stock);	
}

int main(void){
	int i = 0,j = 0,cnt = 0,w_cnt = 0;
	PRODUCT arr[] = { {"아메리카노",4000,10,0}, {"카페라떼",4500,10,0}, {"플랫화이트",5000,10,0}, {"블루마운팅",5500,10,0}, {"아라비카",4000,10,0}};
	char temp_name[10] = "";
	
	while(1){
		printf("주문할 제품명? ");
		scanf("%s",temp_name);
		for(j = 0; j < 4; j++){
			if(strcmp(temp_name,arr[i].name) != 0){
				w_cnt++;
			}
		}
		/*	
		if(temp_name[0] == '.'){
			while(cnt < 5){ // i = 1
				print_menu(&arr[cnt]);
				cnt++;
			}
			return 0;
		}
		*/
		if(temp_name[0] == '.'){
			for(i=0; i<4; i++){
				print_menu(arr+i);
			}
			return 0;
		}
		
		if(w_cnt == 5){
			printf("주문하신 제품은 없습니다.\n");
			w_cnt = 0;
			continue;
		}
		
		printf("주문할 수량? ");
		scanf("%d",&arr[i].order);
		order(&arr[i]);
		i++;
	} 
	
	return 0;
}
