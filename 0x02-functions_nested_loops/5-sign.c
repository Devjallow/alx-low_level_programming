#include "main.h"

/**
 * print_sign - print th sign of a num
 * @n: integer to betested
 *
 * Return: Alwyas return 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

