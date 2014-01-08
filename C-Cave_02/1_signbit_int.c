#include <stdio.h>
int main()
{
	int i = 2147483647; // 2^31
	i++; // ein Bit mehr -> 2^32 (Vorzeichen-Bit)
	printf("%d\n", i);
	return 0;
}
