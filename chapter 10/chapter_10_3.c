#include <stdio.h>
#include <string.h>
typedef struct login{
	char id[20], pw[20];
}LOGIN;

int main(void){
	
	char input_id[20];
	char input_pw[20];
	int i, w_cnt = 0;
	
	LOGIN arr[5] = {
		{"guest", "idontknow"},
		{"hj123", "hj12345"},
		{"jun123", "jun12345"},
		{"lovo6027", "lovo602712"},
		{"qlalfqjsgh", "qlalfqjsgh123"},
	};
	
	while(1){
		
	printf("ID: ");
	gets(input_id);
	if(input_id[0] == '.'){
		return 0;
	}
	
	
	printf("PW: ");
	gets(input_pw);
	
	for(i = 0; i < 5; i++){
		if(strcmp(input_id, arr[i].id) == 0 && strcmp(input_pw, arr[i].pw) == 0){
			printf("로그인 성공\n");
			break;
		}
		else{
			w_cnt++;
			if(w_cnt == 5){
				printf("로그인 실패\n");
			}
		}
	}
	
	input_id[0] = '\0';
	input_pw[0] = '\0'; //입력 문자열 초기화 
  }// while
	return 0;
}
