#include <stdio.h>
#include <string.h> // ������ ���ĺ��� ���� �ܾ��� ù�ܾ�� ��ġ , ���� �ܾ� �Է� �� Ż�� ,  
int main(void){
	
	char word[10][10];
	int	 i=0, len, cnt=0, len_1=0;
	
	while(1){
	printf("word? ");
	scanf("%s",word[i]);
	
	len = strlen(word[i]);
	
	if(len < 3){
		printf("too short, try again\n");
		continue;
	}
	
	if(cnt >= 1){
		if(word[i-1][len_1 - 1] != word[i][0]){
			printf("WRONG WORD!!! YOU FAILED!!!\n");
			break;
		}
	}
	
	if(cnt == i){
	len_1 = len; 		
	}
	
	i++;
	cnt++;
  }
	
	printf("count: %d",cnt);
	return 0;
}
