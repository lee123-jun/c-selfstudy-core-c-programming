#include <stdio.h>
#include <math.h>
int round_pos(int round, int indies){
	double a;
	a = (double)round;
	a *= pos(0.1 , indies);
	a = round(a); //�ݿø�
	a = (int)a * pos(10 , indies);  
	return a;
} 
int main(void)
{	
	printf("1��° �ڸ����� �ݿø��� ���: %d\n",round_pos(1357,1));
	printf("2��° �ڸ����� �ݿø��� ���: %d\n",round_pos(1357,2));
	printf("3��° �ڸ����� �ݿø��� ���: %d\n",round_pos(1357,3));
	
	return 0;
}
