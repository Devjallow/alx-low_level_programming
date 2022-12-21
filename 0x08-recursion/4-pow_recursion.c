#include <stdio.h>

/**
 * _pow_recursion - Prints the power of a given numbers.
 * @x: first interger
 * @y: second interger
 * Return - Always 0.
 */

int _power_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _power_recursion(x, y - 1));
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
