#include "main.h"

/**
 * reset_to_98 - revert to 98
 * @n: input value
 *
 * Description: takes a pointer to an int as parameter and update it
 * Return: Always (0).
 */

void reset_to_98(int *n)
{
	int *num;

	int x = 98;

	num = &x;
	*n = *num;

}
