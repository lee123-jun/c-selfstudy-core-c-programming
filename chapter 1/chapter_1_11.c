#include <stdio.h>
int main(void)
{
	const double pi = 3.14159265;
	
	printf("pi = %.2lf\n",pi);
	printf("pi = %.4lf\n",pi);
	printf("pi = %.6lf\n",pi);
	printf("pi = %.8lf\n",pi);
	printf("pi = %e\n",pi);

	return 0;
}
