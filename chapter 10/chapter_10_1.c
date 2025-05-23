#include <stdio.h>
#include <string.h>
typedef struct LOGIN{
	char id[20];
	char pw[20];
}login;

int main(void){
	
	login infor[3]; 
	int i = 0,len;
	
	while(1){
	printf("\nID? ");
	gets(infor[i].id);
	printf("PW? ");
	gets(infor[i].pw);
	len = strlen(infor[0].pw);
	
	printf("ID: %s\n",infor[i].id);
	printf("PW: ");
		for(i = 0; i < len; i++){
			printf("%c",'*');
		}
	i++;
  	}
	return 0;
}
