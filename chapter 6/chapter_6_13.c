#include <stdio.h> //����δ� �����µ� ���� �Լ��� ������ �ǳ�? 
void get_days_of_month(int year){
	
	int i,j;
	int day[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	printf("[%d]\n",year);
	if(year % 4 == 0){
		day[2] = 28;
	}
	for(i = 1 , j = 0; i <= 12 , j <= 11; i++,j++){
		printf("%d��: %d��",i,day[j]);
		if(i == 6){
			printf("\n");
		}
	}

}

int main(void)
{
	int year;
	int i,j;
	int day[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	printf("����? ");
	scanf("%d",&year); 
	
	printf("[ %d ]\n",year);
	if(year % 4 == 0){
		day[2] = 28;
	}
	for(i = 1 , j = 0; i <= 12 , j <= 11; i++,j++){
		printf("%2d��: %d��  ",i,day[j]);
		if(i == 6){
			printf("\n");
		}
	}
	
	//void get_days_of_month(year);
	
	
	return 0;
}
