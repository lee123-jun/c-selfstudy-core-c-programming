#include <stdio.h>
int main(void)
{
	double base;
	double height;
	double Hypotenuse;
	printf("πÿ∫Ø? ");
	scanf("%lf",&base);
	printf("≥Ù¿Ã? ");
	scanf("%lf",&height);
	
	Hypotenuse = sqrt((base*base)+(height*height));
	
	printf("∫¯∫Ø¿« ±Ê¿Ã: %.6lf", Hypotenuse); 
	
	return 0;
}
