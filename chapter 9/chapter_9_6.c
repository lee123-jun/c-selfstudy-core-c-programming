#include <stdio.h>
#include <string.h>
void check_time_str(char *str){
	
	int i, hour, min, sec;
	int arr[6] = {0,};
	
		for (i = 0; i < 6; i++) {
			arr[i] = str[i] - 48; //"123456" -> 1(49) 2(50) 3(51)456 (char) ����� �ڵ� int ��ȯ 
		}

		hour = (arr[0] * 10) + (arr[1]);
		//printf("%d\n", hour);
		min = (arr[2] * 10) + (arr[3]);
		//printf("%d\n", min);
		sec = (arr[4] * 10) + (arr[5]);
		//printf("%d\n", sec);

		if (hour < 0 || hour > 24) {
			printf("�߸� �Է��߽��ϴ�. hhmmss�������� �Է��ϼ���.\n");
		}
		else if (min < 0 || min > 60) {
			printf("�߸� �Է��߽��ϴ�. hhmmss�������� �Է��ϼ���.\n");
		}
		else if (sec < 0 || sec > 60) {
			printf("�߸� �Է��߽��ϴ�. hhmmss�������� �Է��ϼ���.\n");
		}
		else{
			for (i = 0; i < 6; i++) {
				printf("%d", arr[i]);
			}
			printf("�� ��ȿ�� �ð��Դϴ�.\n");
		}
}

int main(void) {

	char str[7] = "";

	while (1) {
		printf("�ð�(.�Է� �� ����)? ");
		scanf_s("%s", str);
		
		if (str[0] == '.') {
			break;
		}
		
		getchar();
		
		check_time_str(str);
	}
	return 0;
}
