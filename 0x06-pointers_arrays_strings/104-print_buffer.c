#include "main.h"
#include "stdio.h"

int isPrintableASCII(int n)
{
        return (n >= 32 && n <= 126);
}


void printHexes(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", * (b + start + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}


void print_buffer(char *b, int size)
{
	 int start, end;

	 if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
		       printf("%08x:", start);
			printHexes(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	
	} else
		printf("\n")
}
