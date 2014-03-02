#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int newMask();

// encrypts file with XOR and random mask
int main(int argc, char *argv[])
{
	int mask = newMask();
	char c;
	FILE *inputFile = 0;
	FILE *outputFile = 0;
	
	if (argc != 3)
	{
		printf(" Usage: %s <input file> <output file>\n", argv[0]);
		return 1;
	}
	
	inputFile = fopen(argv[1], "r");
	if (!inputFile) return 2;
	
	outputFile = fopen(argv[2], "w");
	if (!outputFile) return 3;
	
	c = fgetc(inputFile); // get first character
	while (c != EOF)
	{
		c ^= mask; // exklusives oder
		fputc(c, outputFile);
		c = fgetc(inputFile);
	}
	
	printf("Mask is %d\n", mask);
	fclose(inputFile);
	fclose(outputFile);
	
	return 0;
}

int newMask()
{
	srand(time(NULL));
	return (double)rand()/RAND_MAX*254+1;	
}
