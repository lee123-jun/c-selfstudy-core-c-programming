#include <stdio.h>
int main(void)
{
	
	double mass;
	double volume;
	double density;
	printf("����(g)? ");
	scanf("%lf",&mass);
	printf("����(��������Ƽ����)? ");
	scanf("%lf",&volume);
	density = mass / volume;
	printf("�е�: %lf ",density); 
	
	return 0;
}
