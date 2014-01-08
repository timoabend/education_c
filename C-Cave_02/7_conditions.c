#include <stdio.h>
int main()
{
	int applesOnStock = 20, apples;
	float cost, costPerApple = 0.20;
	printf("How many apples ould you like to buy?\n");
	scanf("%d", &apples);
	if (apples > applesOnStock)
	{
		printf("Sorry we only have %d apples left.\n", applesOnStock);
	}
	else
	{
		cost = costPerApple * apples;
		printf("That will be %.2f pounds please.\n", cost);
	}
	return 0;
}
