#include <stdio.h>
#define N 20
void fill_array(int arr[], int cnt, int num){
	int i;
	for(i = 0; i < cnt; i++){
		arr[i] = num;
		printf("%d ",arr[i]);
	}
}

int main(void){
	
	int num;
	int arr[N];
	printf("�迭�� ���ҿ� ������ ��? ");
	scanf("%d",&num);	
	
	fill_array(arr,N,num);
	return 0;
}
