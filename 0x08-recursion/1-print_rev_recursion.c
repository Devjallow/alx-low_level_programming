#include "main.h"
/**
 * _print_rev_recursion - prints string in reverse
 * @s: the string to be printed
 * return: Always return 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
