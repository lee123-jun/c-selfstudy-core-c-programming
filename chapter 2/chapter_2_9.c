#include <stdio.h>
#define KG 0.45359237
int main(void)
{
	int weight = 0;
	printf("¹«°Ô(lb)? ");
	scanf("%d",&weight);
	printf("%d ld = %.6lf kg",weight,weight*KG);
	return 0;
}
