#include <stdio.h>
main()
{
	int c;
	FILE *ptr = 0;
	ptr = popen("ls ./", "r");
	if (!ptr) return 1;
	while ((c = fgetc(ptr)) != EOF)
	{
		printf("%c", (char)c);
	}
	fclose(ptr);
	return 0;
}
