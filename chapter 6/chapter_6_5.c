#include <stdio.h>// 202122852 이혜준 

int is_even(int num)
{
	int even_cnt = 0;
	if(num % 2 == 0)
	{
		even_cnt++;
	}
	return even_cnt;
}

int is_odd(int num)
{
	int odd_cnt = 0;
	if(num % 2 == 1)
	{
		odd_cnt++;
	}
	return odd_cnt;
}

int main(void)
{
	int num;
	int even_cnt = 0, odd_cnt = 0;
	printf("정수를 빈칸으로 구분해서 입력하세요.(마지막에 0 입력)\n");
	while(1)
	{
		scanf("%d",&num);
		if(num == 0)
		{
			break;
		}
		even_cnt += is_even(num);
		odd_cnt += is_odd(num);
	 } 
	printf("입력받은 정수 중 짝수는 %d개, 홀수는 %d개입니다.",even_cnt,odd_cnt);	
	return 0;
}
