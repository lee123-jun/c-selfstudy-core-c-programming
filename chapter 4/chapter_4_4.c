#include <stdio.h>
int main(void)
{
	double menstruume; //���
	double solute; //����
	printf("���(g)? "); 
	scanf("%lf",&menstruume);
	printf("����(g)? "); 
	scanf("%lf",&solute);
	printf("��: %.2lf %%",(solute / (menstruume + solute)) * 100); 
	return 0;
}
