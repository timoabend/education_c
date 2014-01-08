#include <stdio.h>
int main()
{
	int x, y, z;
	printf("Enter two whole numbers, separated by a space: ");
	scanf("%d %d", &x, &y);
	z = x + y;
	printf("%d + %d = %d\n", x, y, z);
	return 0;
}
