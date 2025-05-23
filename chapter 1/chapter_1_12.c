#include <stdio.h>
int main(void)
{
	char name[20];
	char hakga[20];
	char num[20];
	
	printf("이름? ");
	scanf("%s",name);
	printf("학과? ");
	scanf("%s",hakga);
	printf("학번? ");
	scanf("%s",num);
	printf("===========================\n");
	printf("이름: %s\n",name);
	printf("학과: %s\n",hakga);
	printf("학번: %s\n",num);
	printf("===========================\n");
	
	
	return 0;
}
