#include "main.h"

/**
 * _isdigit - checks is c is digit
 * @c: input value
 *
 * Return: Always return 0 or 1.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
