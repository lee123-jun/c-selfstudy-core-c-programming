#include <stdio.h>
#include <string.h>
int main(void){
	
	int num, len, i, j;
    char str[15], temp; 
    
	printf("���ڿ�? ");
	gets(str);
	
	while(1){
	printf("�̵��� ���ڼ�? ");
	scanf("%d",&num);
	
	if(num == 0){
		break;
	}
	
	len = strlen(str);
	for(i = 0; i < num; i++){
		temp = str[len - 1];
		for(j = len - 1; j >= 0; j--){
			str[j + 1] = str[j];
		}
		str[0] = temp;
	}
	printf("%s\n",str);
  }
	return 0;
}
