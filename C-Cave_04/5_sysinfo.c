#include <stdio.h>
#include <sys/sysinfo.h>
int main()
{
	struct sysinfo info;
	sysinfo(&info);
	printf("Memory used = %d\n", info.totalram - info.freeram);
	return 0;
}
