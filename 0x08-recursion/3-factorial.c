#include <stdio.h>

/**
 * factorial - Prints the factorial of n numbers.
 * @n: the factor to be prints
 * Return: Always success.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
