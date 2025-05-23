#include <stdio.h> //결과로는 나오는데 굳이 함수로 만들어야 되나? 
void get_days_of_month(int year){
	
	int i,j;
	int day[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	printf("[%d]\n",year);
	if(year % 4 == 0){
		day[2] = 28;
	}
	for(i = 1 , j = 0; i <= 12 , j <= 11; i++,j++){
		printf("%d월: %d일",i,day[j]);
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
	printf("연도? ");
	scanf("%d",&year); 
	
	printf("[ %d ]\n",year);
	if(year % 4 == 0){
		day[2] = 28;
	}
	for(i = 1 , j = 0; i <= 12 , j <= 11; i++,j++){
		printf("%2d월: %d일  ",i,day[j]);
		if(i == 6){
			printf("\n");
		}
	}
	
	//void get_days_of_month(year);
	
	
	return 0;
}
