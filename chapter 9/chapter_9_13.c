#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main(void){
	
	srand(time(0));
	int random;
	char input;
	char str[3][70]= {
	"����Ű�� ���� ������ ��� ���� �����ݴϴ�.\n",
	"Live photo�� ��ƿ �̹����� ������ �� �ֽ��ϴ�.\n",
	"��ũ�� Ÿ�Կ��� iphone�� �Ϸ� ��� �ð��� Ȯ���� �� �ֽ��ϴ�.\n",
	};
	
	while(1){
	random = rand() % 3;
	gets(&input);
	if(input == '\0'){
		printf("%s",str[random]);
	}
	else if(input == NULL){
		break;
	}
	
  }
	return 0;
}
