#include <stdio.h>

int fibonacci(int num)
{
	int arr[20] = {1, 1};
	
	if(arr[num] != 0) return arr[num];
	
	arr[num] = fibonacci(num-2) + fibonacci(num-1);
	return arr[num];
}

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
	int choice, i, input;
	int (*fp_fibo)(int) = &fibonacci;
	int (*fp_power)(int ,int) = &power;

while(1)
{
	printf("�Լ� ������ ����\n\n"); 
	printf("[1] �Ǻ���ġ ����\n"); 
	printf("[2] �ŵ�����\n\n"); 
	
	printf("����: "); scanf("%d", &choice);  
	
	switch(choice)
	{
		case 1:
			printf("���° �ױ��� ���?: "); 
			scanf("%d", &input);
	
			for(i=0; i<=input; i++)
			{
				printf("%d ", fibonacci(i));	
			}
			printf("\n");	
			break;
		case 2:
			printf("base: "); 
			scanf("%d", &input);
	
			for(i = 0; i < 10; i++)
			{
				printf("%d ^ %d = %d\n", input, i, power(input, i));	
			}	
			printf("\n");
			break;
	}
}
	return 0;
}
