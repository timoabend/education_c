#include <stdio.h>
int main()
{
	int i = 3;
	float f = 3;
	i /= 2;
	f /= 2.;
	printf("int(3/2) = %d, float(3./2.) = %f\n", i, f);
	return 0;
}
