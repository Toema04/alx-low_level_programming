#include <unistd.h>
#include <main.h>

/**
 * _putchar - writes tha character c to stdout
 * @c: the character to print
 *
 * Return: On success 1.
 *         On error, -1 is returned. and errno is set appropri ately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
