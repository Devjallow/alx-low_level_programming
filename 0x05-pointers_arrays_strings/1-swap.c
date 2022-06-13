#include "main.h"

/**
 * swap_int - swap integers
 * @a: first parameter
 * @b: second parameter
 *
 * Description: swaps the values of each other
 * Return: Always (0).
 */

void swap_int(int *a, int *b)
{
	int j;

	j = *a;
	*b = *b;
	*b = j;
}
