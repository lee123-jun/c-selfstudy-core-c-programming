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
		printf("ID�� 8�� �̻��̾�� �մϴ�.\n");
		continue;
	}
	if(isalpha(id[0]) != 1 && isalpha(id[0]) != 2){
		printf("ID�� �����ڷ� �����ؾ� �մϴ�.\n");
		continue;
	}
	
	for(i = 0; i < len; i++){
		if(isalnum(id[i]) == 0){
		printf("ID�� �����ڿ� ���ڷθ� �����Ǿ� �մϴ�.\n");
		check++;
		break;
		}
	}
	
	if(check == 1){
		check = 0;
		continue;
	}
	
	printf("%s�� ID�� ����� �� �ֽ��ϴ�.\n",id);
  }
	return 0;
}
