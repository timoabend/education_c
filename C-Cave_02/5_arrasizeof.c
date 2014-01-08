#include <stdio.h>
int main()
{
	float fourVector[4] = { 1.0, 2.0, 0.5, 2.292 };
	printf("sizeof(fourVector) = %ld\n", sizeof(fourVector));
	printf("sizeof(float) = %ld\n", sizeof(float));
	printf("There are %ld elements\n", sizeof(fourVector)/sizeof(float));
	printf("fourVector[3] = %f\n", fourVector[3]);
	return 0;
}
