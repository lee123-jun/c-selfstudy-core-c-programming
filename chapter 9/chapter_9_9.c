#include <stdio.h>
#include <string.h>
int main(void){
	
	char sentence[100] = "";
	char str1[10];
	char str2[10]; 
	printf("파일명? ");
	scanf("%s",str1);
	printf("확장자? ");
	scanf("%s",str2);
	
		strcat(sentence,str1);
		strcat(sentence,".");
		strcat(sentence,str2);
	printf("전체 파일명: %s",sentence);
	return 0;
} 

