#include <stdio.h>
#include <time.h>
typedef struct date{
	int year;
	int month;
	int day;
}DATE;

void set_as_today(DATE *p){
	
	time_t rawtime;
	rawtime = time(0);
	struct tm *p1;
	p1 = localtime(&rawtime);
	p->year = p1->tm_year + 1900;
	p->month = p1->tm_mon + 1;
	p->day = p1->tm_mday;
}

void print_date(DATE *p){
	printf("오늘 날짜는 %d/%d/%d 입니다.",p->year,
	p->month,p->day);
}

int main(void){
	
	DATE day_1;
	set_as_today(&day_1);
	print_date(&day_1);
	
	return 0;
}
