#include <stdio.h>
#define P 0.3025
int main(void)
{
	double m;
	printf("����Ʈ�� ����(��������)? ");	
	scanf("%lf",&m);
	printf("%.2lf �������� = %.2lf ��",m,m*P);
	return 0;
}
