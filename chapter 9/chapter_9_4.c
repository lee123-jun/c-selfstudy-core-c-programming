#include <stdio.h> //test string for reverse string function
#include <string.h>
#include <ctype.h>
int main(void){
	
	char str[100] = "";
	int i, len;
	 
	printf("���ڿ�? ");
	gets(str);
	
	len = strlen(str);
	printf("�������� �� ���ڿ�:  ");
	for(i = len - 1; i >= 0; i--){
		printf("%c",str[i]);
	}
	
	return 0;
}
