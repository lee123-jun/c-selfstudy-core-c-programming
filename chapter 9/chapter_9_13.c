#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main(void){
	
	srand(time(0));
	int random;
	char input;
	char str[3][70]= {
	"엔터키를 누를 때마다 사용 팁을 보여줍니다.\n",
	"Live photo의 스틸 이미지를 변경할 수 있습니다.\n",
	"스크린 타입에서 iphone의 하루 사용 시간을 확인할 수 있습니다.\n",
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
