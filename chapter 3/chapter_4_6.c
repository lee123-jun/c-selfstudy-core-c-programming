#include <stdio.h>
int main(void)
{
	int x1,x2;
	int y1,y2;
	printf("�� ���� ��ǥ (x1, y1)? ");
	scanf("%d %d",&x1,&y1);
	printf("�� �ٸ� ���� ��ǥ (x2, y2)? ");
	scanf("%d %d",&x2,&y2);
	printf("������ ����: %lf",((double)y2 - y1)/(x2 - x1));
	return 0;
}
