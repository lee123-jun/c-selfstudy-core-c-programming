#include <stdio.h>
int main(void){
	
	char sg_name[20][40] = {{0,}};
	char temp_sg_name[40] = "";
	int choice, i, sg_add = 0, w_cnt = 0; 
	
	while(1){
	printf("[ 0.���� 1.�߰� 2.���� 3.��� ] ����? ");
	scanf("%d",&choice);
	getchar();
	
	switch(choice){
		case 0:
			return 0;
			break;	
		
		case 1: //�߰� 
			printf("�뷡 ����? ");	
			gets(sg_name[sg_add]);
			sg_add++;
			break;	
			
		case 2: //���� 
			printf("ã�� �뷡 ����? ");		
			gets(temp_sg_name);
			for(i = 0; i < 20; i++){
				if(strcmp(temp_sg_name,sg_name[i]) == 0){
					printf("������ ����? ");
					gets(sg_name[i]);
					break;
				}
				else{
					w_cnt++;
					if(w_cnt == 20){
						printf("���� �̸��� �ٽ� Ȯ�����ּ���.\n");
						break;
					}
				}
			}
			break;
			
		case 3: //��� 
			printf("<<�뷡 ���>>\n");
			for(i = 0; i < 20; i++){
				printf("%s\n",sg_name[i]);
				if(sg_name[i] == '\0'){
					break;
				}
			}
			break;
			
	}// switch
  } //while
  
	return 0;
} 
