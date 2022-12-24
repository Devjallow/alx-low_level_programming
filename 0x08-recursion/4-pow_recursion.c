#include <stdio.h>

/**
 * _pow_recursion - prints the power of a given numbers.
 * @x: First interger
 * @y: Second interger
 * Return - Always success 0.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
