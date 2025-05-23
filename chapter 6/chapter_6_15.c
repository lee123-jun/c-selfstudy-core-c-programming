#include <stdio.h>
#include <math.h>
int round_pos(int round, int indies){
	double a;
	a = (double)round;
	a *= pos(0.1 , indies);
	a = round(a); //반올림
	a = (int)a * pos(10 , indies);  
	return a;
} 
int main(void)
{	
	printf("1번째 자리에서 반올림한 결과: %d\n",round_pos(1357,1));
	printf("2번째 자리에서 반올림한 결과: %d\n",round_pos(1357,2));
	printf("3번째 자리에서 반올림한 결과: %d\n",round_pos(1357,3));
	
	return 0;
}
