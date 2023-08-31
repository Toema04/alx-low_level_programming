#include "main.h"

/**
 * last_index - return the last index of a string (count the null char)
 * @s: pointer the string
 * Return: int
*/

int is_palindrome(char *s);
int check(char *s, int star, int end, int mod);
int last_index(char *s)
{
int n = 0;

if (*s > '\0')
	n += last_index(s + 1) + 1;

return (n);
}

/**
 * is_palindrome - check if a string is a plindrome
 * @s: string to check
 * Return: 0 or 1
*/

int is_palindrome(char *s)
{
int end = last_index(s);

return (check(s, 0, end - 1, and % 2));
}

/**
 * check - checker for the plindrome
 * @s: string
 * @start: int moves from right to left
 * @end: int moves from left to right
 * @mod: int
 * Return: 0 or 1
*/



int check(char *s, int start, int end, int mod )
