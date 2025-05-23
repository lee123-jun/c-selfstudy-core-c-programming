#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){
	
	int i, len, No_cnt = 0, Yes_cnt = 0;
	char num[10];
	while(1){
	printf("전화번호(.입력 시 종료)? ");
	gets(num);
	
	if(num[0] == '.'){
		return 0;
	}
		
	len = strlen(num);
	for(i = 0; i < len -1; i++){
		if(isdigit(num[i]) == 0){
			No_cnt++;
			if(No_cnt > 0 || num[0] != '0' || num[1] == '1' || num[2] == '0'){
				printf("잘못 입력했습니다. 01012345678 형식으로 입력하세요.\n");
				break;
			}
		}
		else if(isdigit(num[i]) == 1){
			Yes_cnt++;
			if(Yes_cnt == 11){
				printf("%s는 유효한 전화번호입니다.\n",num);
				break;
			}
		}
	}
		
  }
	return 0;
}
