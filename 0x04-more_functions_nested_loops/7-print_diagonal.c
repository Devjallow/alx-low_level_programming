#include "main.h"

/**
 * print_diagonal - prints diagonal line n times.
 * @n: times diagonal line
 * Return: return void.
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (i = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		if (i < (n - 1))
		_putchar('\n');
	}
	_putchar('\n');
}