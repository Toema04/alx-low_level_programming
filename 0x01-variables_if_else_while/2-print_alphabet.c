#include <stdio.h>

/**
 *main - entry point
 *
 * Description: print all aplhabet letters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putcher('\n');

	return (0);
}
