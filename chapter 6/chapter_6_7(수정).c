#include <stdio.h> //������ 202122852 
int is_prime(int num)
{
	int i;
	
	for(i = 2;i < num; i++)
	{
		if(num % i == 0)
		{
		return 0; //�Ҽ��� �ƴϴ�
		}
	}
		
	return 1; //�Ҽ��̴�. 
}

int main(void)
{
	int i;
	int num;
	int prime_cnt = 0;
	printf("1~N������ �Ҽ��� ���մϴ�. N��? ");
	scanf("%d",&num); 
	
	for(i = 2; i <= num; i++)
	{
		if(is_prime(i) == 1)
		{
			printf("%d ",i);
			prime_cnt++;
		}
    }
    printf("\n�Ҽ��� ��� %d�Դϴ�.",prime_cnt);
	return 0;
}
