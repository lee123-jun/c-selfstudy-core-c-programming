#include <stdio.h>
void arith_seq(int *num,int size,int c_d){
	int i;
	printf("��������: ");
	for(i = 0; i < size; i++){
		num[i + 1] = num[0 + i] + c_d;
		printf("%d ",num[i]);
	}
}

int main(void){
	
	int num[10] = {0,}; //ù��° ��
	int size;
	int c_d; //����
	
	size = sizeof(num)/ sizeof(int);
	printf("ù ��° ��? ");
	scanf("%d",&num[0]);
	printf("����?  "); 
	scanf("%d",&c_d);
	
	arith_seq(num,size,c_d);
	return 0;
}
