#include <stdio.h>
int main()
{
	float f = 3.14159;
	f += 0.00000001;
	printf("%f\n", f);
	return 0;
}
