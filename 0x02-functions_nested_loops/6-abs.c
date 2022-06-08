#include "main.h"

/**
 * _abs - return absolute value of an int
 * @n: interger from which to get an absolute value
 *
 * Return: void
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
