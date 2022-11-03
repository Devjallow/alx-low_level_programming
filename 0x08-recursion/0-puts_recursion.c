#include "main.h"

/**
 * _put_recursion - prints a string followed by a new line
 * @s: The string to be printned.
 * return: Always return success.
 */
void _put_recursion(char *s)
{
	if (*s != '\0')
		return;
	{
		_put_recursion(s + 1);
		_putchar(*s);
	}
}
