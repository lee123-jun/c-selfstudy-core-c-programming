#include <stdio.h> //test string for reverse string function
#include <string.h>
#include <ctype.h>
int main(void){
	
	char str[100] = "";
	int i, len;
	 
	printf("문자열? ");
	gets(str);
	
	len = strlen(str);
	printf("역순으로 된 문자열:  ");
	for(i = len - 1; i >= 0; i--){
		printf("%c",str[i]);
	}
	
	return 0;
}
