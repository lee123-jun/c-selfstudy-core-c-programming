#include <stdio.h>
#include <math.h>
#define PI 3.141592
int main(void)
{
	double radius = 0;
	double volume = 0;
	printf("�������� ����? ");
	scanf("%lf",&radius);
	volume = (4.0)/3 * PI * radius * radius * radius;
	printf("���� ����: %lf",volume); 
	return 0;
}
