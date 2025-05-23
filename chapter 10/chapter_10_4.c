#include <stdio.h>
#include <string.h>
typedef struct date{
	int year;
	int month;
	int day;
}DATE; 

void print_date(DATE *pt){
	printf("%d/%d/%d\n",pt->year,pt->month,pt->day);
}

int main(void){
	
	DATE input[3] = {{0,}};
	int i = 0;
	
	while(1){
	printf("¿¬? ");
	scanf("%d",&input[i].year);
	getchar();
	printf("¿ù? ");
	scanf("%d",&input[i].month);
	getchar();
	printf("ÀÏ? ");
	scanf("%d",&input[i].day);
	getchar();
	
	while(i <= 3){
		print_date(&input[i]);
		break;
		}	
	i++;
  }
	
	return 0;
}
