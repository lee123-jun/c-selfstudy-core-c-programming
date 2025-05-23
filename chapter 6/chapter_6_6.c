#include <stdio.h>
void choose_menu(int num)
{
		if(num == 1)
		{
			printf("파일 열기를 수행합니다.");
		 } 
		else if(num == 2)
		{
			printf("파일 저장를 수행합니다.");
		 } 
		else if(num == 3)
		{
			printf("파일 인쇄를 수행합니다.");
		 } 
		else if(num == 0)
		{
			printf("프로그램을 종료합니다.");
		 }
		else{
			printf("잘못입력하셧습니다.");
		}
}

int main(void)
{
	int num;
	
	while(1)
	{
		printf("[1.파일열기 2.파일 저장 3.인쇄 0.종료]");
		printf("선택? ");
		scanf("%d",&num);
		choose_menu(num);
	}
	
	
	
	
	
	return 0;
}
