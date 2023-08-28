#include "main.h"

/**
 * *_memset - fills nemory with a constant byte.
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: pointer
*/

char *_memset(char *s, char *b,, unsigned int n	)
{
	unsigned int itr;

	for (itr = 0; n > 0; itr++, n--)
	{
		s[itr] = b;
	}

	return (s);
}
