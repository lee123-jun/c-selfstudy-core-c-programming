#include <stdio.h>
int main(void)
{
	
	int width, colmn;
	printf("������ ����?");
	scanf("%d",&width); 
	printf("������ ����?");
	scanf("%d",&colmn);
	printf("���簢���� ����: %d\n",width * colmn);
	printf("���簢���� �ѷ�: %d",(width*2) + (colmn*2));
	
	return 0;
}
