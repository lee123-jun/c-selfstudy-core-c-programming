#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

int compare_str(const char *a, const char *b)
{
	return strcmp(a, b);
}

int main(void)
{
	int i;
	char input1[30];
	char input2[30];
	char movie_arr[5][30] = { "Ant-Man", "Avengers", "Bohemian Rhapsody", "Insidious", "MI:Fallout" };
	
while(1)
{ 
	printf("<<< ��ȭ��� >>>\n");
	for(i = 0; i < 5; i++)
	{
		printf("%s\n", movie_arr[i]);
	}
	printf("����? ");
	scanf("%s", input1);
	printf("������ ����?  ");
	scanf("%s", input2);
	
}
	return 0;
}
