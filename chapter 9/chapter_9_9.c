#include <stdio.h>
#include <string.h>
int main(void){
	
	char sentence[100] = "";
	char str1[10];
	char str2[10]; 
	printf("���ϸ�? ");
	scanf("%s",str1);
	printf("Ȯ����? ");
	scanf("%s",str2);
	
		strcat(sentence,str1);
		strcat(sentence,".");
		strcat(sentence,str2);
	printf("��ü ���ϸ�: %s",sentence);
	return 0;
} 

