#include <stdio.h>


int me(int argc, int const **argv)
{
	(void)argc;
	printf("%d\n", argv[0]);
	return (0);
}
