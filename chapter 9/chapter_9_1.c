#include <stdio.h>
#include <string.h>
int main(void){
	
	char str[1000] = "";
	int space_cnt, i = 0;
	printf("���ڿ�? ");
	gets(str);
 	while(str[i] != '\0'){
 		if(str[i] == ' '){
 			space_cnt++;
		 }
		 
 		i++;
	 }
	 printf("���� ������ ����: %d",space_cnt);
	return 0;
}  
