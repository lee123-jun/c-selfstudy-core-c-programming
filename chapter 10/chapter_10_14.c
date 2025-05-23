#include <stdio.h>
#define SIZE 3

typedef struct point{
	int left_bottom_x;
	int left_bottom_y;
	int right_top_x;
	int right_top_y;
}POINT;

void print_rect(POINT *pt){ //배열 출력 

	printf("[RECT 좌하단점: (%d, %d) 우상단점:(%d, %d)]  ",pt->left_bottom_x,pt->left_bottom_y,pt->right_top_x,pt->right_top_y);	

} 

void nomalize_rect(POINT *pt){ //정규화 스왑 
	int temp;
	if(pt->left_bottom_x > pt->right_top_x){
		temp = pt->left_bottom_x;
		pt->left_bottom_x = pt->right_top_x;
		pt->right_top_x = temp;
	}
	if(pt->left_bottom_y > pt->right_top_y){
		temp = pt->left_bottom_y;
		pt->left_bottom_y = pt->right_top_y;
		pt->right_top_y = temp;
	}
}

void center_rect(POINT *pt){ //중심좌표 구하기 
	int x = 0,y = 0;
	x = pt->left_bottom_x + (pt->right_top_x - pt->left_bottom_x)/2;
	y = pt->left_bottom_y + (pt->right_top_y - pt->left_bottom_y)/2;
	printf("중심점: (%d,%d)\n",x,y);	
} 

int main(void){
	int i = 0;
	POINT arr[SIZE] = {
	{79, 9, 85, 39},
	{8, 66, 78, 98},
	{11, 92, 58, 96}
	};
	
	while(i < 3){
	print_rect(&arr[i]);
	nomalize_rect(&arr[i]);
	center_rect(&arr[i]);
	i++;
	}
	return 0;
}
