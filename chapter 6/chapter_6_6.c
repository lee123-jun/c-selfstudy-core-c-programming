#include <stdio.h>
void choose_menu(int num)
{
		if(num == 1)
		{
			printf("���� ���⸦ �����մϴ�.");
		 } 
		else if(num == 2)
		{
			printf("���� ���带 �����մϴ�.");
		 } 
		else if(num == 3)
		{
			printf("���� �μ⸦ �����մϴ�.");
		 } 
		else if(num == 0)
		{
			printf("���α׷��� �����մϴ�.");
		 }
		else{
			printf("�߸��Է��ϼ˽��ϴ�.");
		}
}

int main(void)
{
	int num;
	
	while(1)
	{
		printf("[1.���Ͽ��� 2.���� ���� 3.�μ� 0.����]");
		printf("����? ");
		scanf("%d",&num);
		choose_menu(num);
	}
	
	
	
	
	
	return 0;
}
