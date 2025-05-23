#include <stdio.h>

int power(int base, int exponent)
{
	if(exponent == 0) return 1;
	
	return base * power(base, exponent-1);
}

int main(void)
{
	int input, i;
	printf("base: "); 
	scanf("%d", &input);
	
	for(i = 0; i < 10; i++)
	{
		printf("%d ^ %d = %d\n", input, i, power(input, i));	
	}	
	
	return 0;
}
