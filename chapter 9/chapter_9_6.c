#include <stdio.h>
#include <string.h>
void check_time_str(char *str){
	
	int i, hour, min, sec;
	int arr[6] = {0,};
	
		for (i = 0; i < 6; i++) {
			arr[i] = str[i] - 48; //"123456" -> 1(49) 2(50) 3(51)456 (char) 연산시 자동 int 변환 
		}

		hour = (arr[0] * 10) + (arr[1]);
		//printf("%d\n", hour);
		min = (arr[2] * 10) + (arr[3]);
		//printf("%d\n", min);
		sec = (arr[4] * 10) + (arr[5]);
		//printf("%d\n", sec);

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
			for (i = 0; i < 6; i++) {
				printf("%d", arr[i]);
			}
			printf("는 유효한 시간입니다.\n");
		}
}

int main(void) {

	char str[7] = "";

	while (1) {
		printf("시간(.입력 시 종료)? ");
		scanf_s("%s", str);
		
		if (str[0] == '.') {
			break;
		}
		
		getchar();
		
		check_time_str(str);
	}
	return 0;
}
