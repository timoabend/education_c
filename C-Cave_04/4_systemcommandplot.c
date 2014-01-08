#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int x_min = 0, x_max = 4;
	char commandStr[100], systemCmd[200];
	if (argc < 2)
	{
		printf("Usage %s <function>\n", argv[0]);
	}
	sprintf(commandStr, "plot [x=%d:%d] %s(x)", x_min, x_max, argv[1]);

	sprintf(systemCmd, "echo \"%s\" | gnuplot --persist", commandStr);
	system(systemCmd);
	return 0;
}
