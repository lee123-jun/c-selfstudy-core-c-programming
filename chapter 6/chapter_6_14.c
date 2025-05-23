#include <stdio.h>
int check_date(int year, int month, int day){
	
	int i; //i값이 즉 month값 
	int L_day[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	if(month < 1 || month > 12){
		return 0;
	}
	else if(year % 4 == 0){
		L_day[1] = 28;
	}
	
	for(i = 1; i <= 12; i++){
		if( day <= 0 || day > L_day[i]){
			return 0;
		}
	}
	
	return 1;
} 

int main(void)
{
	int year,month,day;
	
	while(1){
	printf("날짜 (연 월 일)? ");
	scanf("%d %d %d",&year,&month,&day); 
	if(check_date(year,month,day) == 1){
		printf("입력한 날짜는 %d년 %d월 %d일입니다.\n",year,month,day);		
	}
	else if(check_date(year,month,day) == 0){
		printf("잘못 입력하셨습니다. 유효한 날짜를 입력하세요.\n");
	}
}
	
	return 0;
}
