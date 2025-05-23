#include <stdio.h>
#define SIZE 3

typedef struct point{
	int left_bottom_x;
	int left_bottom_y;
	int right_top_x;
	int right_top_y;
}POINT;

void print_rect(POINT *pt){ //�迭 ��� 

	printf("[RECT ���ϴ���: (%d, %d) ������:(%d, %d)]  ",pt->left_bottom_x,pt->left_bottom_y,pt->right_top_x,pt->right_top_y);	

} 

void nomalize_rect(POINT *pt){ //����ȭ ���� 
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

void center_rect(POINT *pt){ //�߽���ǥ ���ϱ� 
	int x = 0,y = 0;
	x = pt->left_bottom_x + (pt->right_top_x - pt->left_bottom_x)/2;
	y = pt->left_bottom_y + (pt->right_top_y - pt->left_bottom_y)/2;
	printf("�߽���: (%d,%d)\n",x,y);	
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
