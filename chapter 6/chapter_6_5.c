#include <stdio.h>// 202122852 ������ 

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
	printf("������ ��ĭ���� �����ؼ� �Է��ϼ���.(�������� 0 �Է�)\n");
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
	printf("�Է¹��� ���� �� ¦���� %d��, Ȧ���� %d���Դϴ�.",even_cnt,odd_cnt);	
	return 0;
}
