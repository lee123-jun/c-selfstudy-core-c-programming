#include <stdio.h>
#include <string.h>
#include <ctype.h>
int strcmp_is(char str1[], char str2[]){
	int i = 0;
	char temp_str1[50];
	char temp_str2[50];
	
	while(str2[i] != '\0' && str1[i] != '\0'){
		temp_str1[i] = tolower(str1[i]);
		temp_str2[i] = tolower(str2[i]);
		if(temp_str1[i] != temp_str2[i]){
			return 1;
		}
		i++;
	}
	
	return 0;
} 

int main(void){
	
	int i;
	char str1[50] = "";
	char str2[50] = "";
	printf("ù ��° ���ڿ� ? ");
	gets(str1);
	printf("�� ��° ���ڿ� ? ");
	gets(str2);
	
	i = strcmp_is(str1,str2);
	
	if(i > 0 || i < 0){
		printf("%s�� %s�� �ٸ��ϴ�.",str1,str2);
	} 
	else{
		printf("%s�� %s�� �����ϴ�.",str1,str2);
	}
	return 0;
}
