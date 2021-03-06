#include "main.h"

/**
 * print_rev - prints a string in reverse
 *@s: input string
 *
 * Description: prints string, in reverse
 * Return: no return.
 */

void print_rev(char *s)
{
	int left, len, i;

	len = 0;
	left = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		len = i;
	}
	for (; len >= left; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
