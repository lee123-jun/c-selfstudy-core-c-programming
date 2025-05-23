#include <stdio.h>
#include <string.h>
int main(void){
	int hour, min, sec;
	char buf[10];
	printf("시 분 초? ");	
	scanf("%d %d %d",&hour,&min,&sec);
	getchar();
	
	if (hour < 0 || hour > 24) {
		printf("잘못 입력했습니다. hhmmss형식으로 입력하세요.\n");
	}
	else if (min < 0 || min > 60) {
		printf("잘못 입력했습니다. hhmmss형식으로 입력하세요.\n");
	}
	else if (sec < 0 || sec > 60) {
		printf("잘못 입력했습니다. hhmmss형식으로 입력하세요.\n");
	}
	else{
		sprintf(buf,"%d:%d:%d",hour,min,sec);
		printf("%s\n",buf);
	}
	
	return 0;
} 
