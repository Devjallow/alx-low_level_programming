#include <stdio.h>

/**
 * _pow_recursion - Prints the power of a given number n and y.
 * @x: first interger
 * @y: second interger
 * Return: Always Success.
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
