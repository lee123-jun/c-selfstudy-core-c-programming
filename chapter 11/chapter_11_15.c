#include <stdio.h>
#include <stdlib.h>

int extend_array(int *arr, int arr_cnt)
{
	int len = arr_cnt * 2;
	
	arr = (int *)malloc(sizeof(int) * len);
	
	return len;
}

int main(void)
{
	int *arr;
	int input, i=0, max_arr=2, j, sum=0;
	
	arr = (int *)malloc(sizeof(int) * max_arr);
	printf("�迭�� �߰��� ����? ");
	while(1)
	{
		scanf("%d", &input);
		
		if(max_arr == i)
		{
			max_arr = extend_array(arr, max_arr);
			//printf("�迭�� ũ�� : %d\n\n", sizeof(arr)/sizeof(int) );
		}
		
		if(input == -1)
		{
			break;
		}
		arr[i] = input;
		i++;
	}
	
	printf("\n�迭�� �ִ� ũ��: %d, ���� ����� ���� ��: %d\n�迭: ", max_arr, i);
	for(j=0; j<i; j++)
	{
		sum += arr[j];
		printf("%d ", arr[j]);
	}
	printf("\n�迭�� �հ�: %d", sum);
	
	free(arr);
	return 0;
}
