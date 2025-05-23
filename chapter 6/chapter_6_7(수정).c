#include <stdio.h> //이혜준 202122852 
int is_prime(int num)
{
	int i;
	
	for(i = 2;i < num; i++)
	{
		if(num % i == 0)
		{
		return 0; //소수가 아니다
		}
	}
		
	return 1; //소수이다. 
}

int main(void)
{
	int i;
	int num;
	int prime_cnt = 0;
	printf("1~N사이의 소수를 구합니다. N은? ");
	scanf("%d",&num); 
	
	for(i = 2; i <= num; i++)
	{
		if(is_prime(i) == 1)
		{
			printf("%d ",i);
			prime_cnt++;
		}
    }
    printf("\n소수는 모두 %d입니다.",prime_cnt);
	return 0;
}
