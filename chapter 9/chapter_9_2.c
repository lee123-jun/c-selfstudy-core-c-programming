#include <stdio.h>
#include <string.h>//Certain words in a C program have special meaning, they are keywords.
void remove_space(char *arr){
	int i;
	for(i = 0; arr[i] != '\0'; i++){
		if(arr[i] != ' '){
			printf("%c",arr[i]);
		}
	}
	
} 
int main(void){
	
	char arr[500] = "";
	printf("���ڿ�? ");
	gets(arr);
	
	printf("���鹮�� ������: ");
	remove_space(arr); 
	
	return 0;
}
