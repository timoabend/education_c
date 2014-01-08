#include <stdio.h>
int main()
{
	int i, n, sum = 0;
	printf("Bitte geben Sie n an: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		sum = sum + i+1;
	}
	printf("\nDie Dreieckszahl ist %d\n", sum);
	return 0;
}
