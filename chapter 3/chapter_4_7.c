#include <stdio.h>
int main(void)
{
	double base;
	double height;
	double Hypotenuse;
	printf("�غ�? ");
	scanf("%lf",&base);
	printf("����? ");
	scanf("%lf",&height);
	
	Hypotenuse = sqrt((base*base)+(height*height));
	
	printf("������ ����: %.6lf", Hypotenuse); 
	
	return 0;
}
