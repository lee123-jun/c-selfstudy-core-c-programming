#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){
	int i, len, key;
	char str[20];
	
	while(1){
		
		printf("\n���ڿ�? ");
		gets(str); // ���๮�ڰ� ������ �������� ���ڸ� �Է¹���. scanf�� ���鹮�ڸ� �Է��� ������ �޾Ƶ��� 
	
		len = strlen(str);
	
		if(str[0] == '.'){
			return 0;
		}
	
		printf("\n��ȣ Ű(����)? ");
		scanf("%d",&key);
		getchar();
	
		printf("\n��ȣȭ�� ���ڿ�: ");
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
