#include <stdio.h>
#define PI 3.141592
//�̹����� ������ ���۳� 
int main(void)
{
	int radius;
	int height;
	printf("�������� ����? ");
	scanf("%d",&radius); 
	printf("����? ");
	scanf("%d",&height);
	printf("������� ���� : %.6lf",(radius * radius) * PI * height); 
	return 0;
}
