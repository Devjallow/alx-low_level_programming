#include "main.h"
#include <stdio.h>

/**
 * print_array - print n element of an array
 * @: input array
 * @n: input n element
 * Return: no return
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
