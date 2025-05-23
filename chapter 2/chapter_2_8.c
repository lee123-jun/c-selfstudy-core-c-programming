#include <stdio.h>
#define M 0.9144
int main(void)
{
	int yard;
	printf("±æÀÌ(yd)? ");
	scanf("%d",&yard);
	printf(" %d yd = %.6lf m",yard,yard*M);
	return 0;
}
