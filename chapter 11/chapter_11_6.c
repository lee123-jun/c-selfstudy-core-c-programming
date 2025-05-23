#include <stdio.h>

int power(int base, int exponent)
{
	
	static int arr[10][10] = {};
	
	if(arr[base-1][exponent-1] != 0) return arr[base-1][exponent-1];
	
	if(exponent == 0) return 1;
	
	arr[base-1][exponent-1] = base * power(base, exponent - 1);
	return arr[base-1][exponent-1];
}

int main(void)
{
	int input, i;
	
	while(1)
	{
		printf("base: "); 
		scanf("%d", &input);
	
		for(i = 0; i < 10; i++)
		{
			printf("%d ^ %d = %d\n", input, i, power(input, i));	
		}		
	}

	return 0;
}
