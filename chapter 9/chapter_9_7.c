#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){
	
	int i, len, No_cnt = 0, Yes_cnt = 0;
	char num[10];
	while(1){
	printf("��ȭ��ȣ(.�Է� �� ����)? ");
	gets(num);
	
	if(num[0] == '.'){
		return 0;
	}
		
	len = strlen(num);
	for(i = 0; i < len -1; i++){
		if(isdigit(num[i]) == 0){
			No_cnt++;
			if(No_cnt > 0 || num[0] != '0' || num[1] == '1' || num[2] == '0'){
				printf("�߸� �Է��߽��ϴ�. 01012345678 �������� �Է��ϼ���.\n");
				break;
			}
		}
		else if(isdigit(num[i]) == 1){
			Yes_cnt++;
			if(Yes_cnt == 11){
				printf("%s�� ��ȿ�� ��ȭ��ȣ�Դϴ�.\n",num);
				break;
			}
		}
	}
		
  }
	return 0;
}
