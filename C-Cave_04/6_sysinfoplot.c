#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/sysinfo.h>
int main()
{
	int i, ramUsed;
	char gnuplotCmd[250], systemCmd[350];
	FILE *outPtr =0;
	char fileName[50];
	sprintf(fileName, "data.txt");
	struct sysinfo info;
	outPtr = fopen(fileName, "w");
	if (!outPtr) return 1;
	for (i = 0; i < 60; i++)
	{
		sysinfo(&info);
		ramUsed = info.totalram - info.freeram;
		fprintf(outPtr, "%d %d\n", i, ramUsed);
		usleep(500000); // 1/2 Sekunde
	}
	fclose(outPtr);

	sprintf(gnuplotCmd, "plot \'%s\'\n", fileName);
	sprintf(systemCmd, "echo \"%s\" | gnuplot --persist", gnuplotCmd);

	system(systemCmd);
	return 0;
}
