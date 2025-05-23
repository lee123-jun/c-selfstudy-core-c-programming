#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){
	
	int i, j, len;
	char name[15];
	char inital[10];
	 
	while(1){
	printf("\n영문 이름? ");
	gets(name);
	
	if(name[0] == '.'){
		return 0;
	}
	
	len = strlen(name);
	for(i = 0, j = 1; i < len; i++){
		inital[0] = name[0];
		if(name[i] == ' '){
			inital[j] = name[i+1];
			j++;
		}
	}
	
	len = strlen(inital);
	for(i = 0; i < len; i++){
		inital[i] = toupper(inital[i]);
	}
	printf("이니셜: %s",inital);
	
	for(i = 0; i < len; i++){
		inital[i] = NULL;
	}
	
  }
	return 0;
}
