#include <stdio.h>
#include <string.h>

int main(void){
	int i, len, cnt_1 =0, cnt_2 = 0, w_cnt = 0;
	char id[15] = "";
	char pw[15] = "";
	char sv_id[4][15] = {"hj123", "lovo6027", "nh9812", "yoonsun106",};
	char sv_pw[4][15] = {"jun123","hj123jun123","s1k2g3u4s","yoons106",};
	
	while(1){
		
	printf("ID: ");
	gets(id);
	printf("PW: ");
	gets(pw);
	
	for(i = 0; i < 4; i++){
		if(strcmp(id, sv_id[i]) != 0){
			cnt_1++;
			if(cnt_1 == 4){
				printf("�ش� ID�� �����ϴ�.\n");
				w_cnt++; //�α��� ���� Ƚ�� ī��Ʈ 
			}
		}
	}
	
	for(i = 0; i < 4; i++){
		if(strcmp(pw, sv_pw[i]) != 0){
			cnt_2++;
			if(cnt_2 == 4){
				printf("�н����尡 Ʋ�Ƚ��ϴ�.\n");
				w_cnt++;
			}
		}
	}
	
	for(i = 0; i < 4; i++){
		if(strcmp(id, sv_id[i]) == 0 && strcmp(pw, sv_pw[i]) == 0){
			printf("�α��� ����!\n");
			break;		
		}
	}
	
	if(w_cnt == 3){
			printf("�α��� ���� Ƚ�� 3���� �ʰ��߽��ϴ�. �α��� ����!\n"); 		
		}
	
  }
	return 0;
}
