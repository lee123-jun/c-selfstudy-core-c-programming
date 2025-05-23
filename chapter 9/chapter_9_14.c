#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){
	int len, i, check = 0;
	char id[10];
		
	while(1){
	printf("ID? ");
	gets(id);
	len = strlen(id);
	
	if(len < 8){
		printf("ID는 8자 이상이어야 합니다.\n");
		continue;
	}
	if(isalpha(id[0]) != 1 && isalpha(id[0]) != 2){
		printf("ID는 영문자로 시작해야 합니다.\n");
		continue;
	}
	
	for(i = 0; i < len; i++){
		if(isalnum(id[i]) == 0){
		printf("ID는 영문자와 숫자로만 구성되야 합니다.\n");
		check++;
		break;
		}
	}
	
	if(check == 1){
		check = 0;
		continue;
	}
	
	printf("%s는 ID로 사용할 수 있습니다.\n",id);
  }
	return 0;
}
