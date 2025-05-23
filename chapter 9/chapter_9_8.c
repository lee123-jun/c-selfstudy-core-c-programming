#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){
	int i, len, key;
	char str[20];
	
	while(1){
		
		printf("\n문자열? ");
		gets(str); // 개행문자가 나오기 전까지의 문자를 입력받음. scanf는 공백문자를 입력의 끝으로 받아들임 
	
		len = strlen(str);
	
		if(str[0] == '.'){
			return 0;
		}
	
		printf("\n암호 키(정수)? ");
		scanf("%d",&key);
		getchar();
	
		printf("\n암호화된 문자열: ");
		for(i = 0; i < len; i++){
			if(str[i] == ' '){
				printf(" ");
				continue;
			}
			str[i] += key;
			printf("%c",str[i]);
		}
		printf("\n");
	
	} //while
	
	return 0;
}
