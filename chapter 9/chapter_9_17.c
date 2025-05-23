#include <stdio.h>
int main(void){
	
	char sg_name[20][40] = {{0,}};
	char temp_sg_name[40] = "";
	int choice, i, sg_add = 0, w_cnt = 0; 
	
	while(1){
	printf("[ 0.종료 1.추가 2.수정 3.목록 ] 선택? ");
	scanf("%d",&choice);
	getchar();
	
	switch(choice){
		case 0:
			return 0;
			break;	
		
		case 1: //추가 
			printf("노래 제목? ");	
			gets(sg_name[sg_add]);
			sg_add++;
			break;	
			
		case 2: //수정 
			printf("찾을 노래 제목? ");		
			gets(temp_sg_name);
			for(i = 0; i < 20; i++){
				if(strcmp(temp_sg_name,sg_name[i]) == 0){
					printf("수정할 제목? ");
					gets(sg_name[i]);
					break;
				}
				else{
					w_cnt++;
					if(w_cnt == 20){
						printf("곡의 이름을 다시 확인해주세요.\n");
						break;
					}
				}
			}
			break;
			
		case 3: //목록 
			printf("<<노래 목록>>\n");
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
