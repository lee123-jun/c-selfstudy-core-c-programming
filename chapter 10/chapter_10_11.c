#include <stdio.h>
#include <string.h>

typedef struct product{
	char name[20]; //��ǰ�� 
	int price; //���� 
	int stock; //���  
	int order; //�ֹ����� 
}PRODUCT; 

void order(PRODUCT *pt){
	if(pt->stock < pt->order){
		printf("��� �����մϴ�.\n");
	}
	else{
		pt->stock -= pt->order;
		printf("���� �ݾ�: %d %s ���: %d\n",(pt->price)*(pt->order),pt->name,pt->stock);
	}
}

void print_menu(PRODUCT *pt){
	printf("[%s %d�� ���: %d]\n",pt->name,pt->price,pt->stock);	
}

int main(void){
	int i = 0,j = 0,cnt = 0,w_cnt = 0;
	PRODUCT arr[] = { {"�Ƹ޸�ī��",4000,10,0}, {"ī���",4500,10,0}, {"�÷�ȭ��Ʈ",5000,10,0}, {"��縶����",5500,10,0}, {"�ƶ��ī",4000,10,0}};
	char temp_name[10] = "";
	
	while(1){
		printf("�ֹ��� ��ǰ��? ");
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
			printf("�ֹ��Ͻ� ��ǰ�� �����ϴ�.\n");
			w_cnt = 0;
			continue;
		}
		
		printf("�ֹ��� ����? ");
		scanf("%d",&arr[i].order);
		order(&arr[i]);
		i++;
	} 
	
	return 0;
}
