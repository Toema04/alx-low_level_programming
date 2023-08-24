#include "main.h"

/**
 * rotl3 - encodes a string using rotl3
 * @s: input string
 * Return: encoded string
*/

char *rotl3(char *s)
{
	int i;

	char rotl3[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHILMNOPQRSTUVWXYZ";
	char ROTl3[] = "nopqrstuvwxyzabcdefghijklmoNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == rotl3[i])
			{
				*s = ROTl3[i];
				break;
			}
		}
		s++
	}
	return (ptr);
}
