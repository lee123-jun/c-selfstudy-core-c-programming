#include <stdio.h>
#include <string.h>
int main(void){
	int hour, min, sec;
	char buf[10];
	printf("�� �� ��? ");	
	scanf("%d %d %d",&hour,&min,&sec);
	getchar();
	
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
		sprintf(buf,"%d:%d:%d",hour,min,sec);
		printf("%s\n",buf);
	}
	
	return 0;
} 
