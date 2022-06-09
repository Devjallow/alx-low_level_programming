#include "main.h"

/**
 * times_table - prints the 9 table
 *
 * Return: Alwyas return 0.
 */

void times_table(void)
{
	int i;
	int j;
	int product;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				_putchar(48);
				continue;
			}
			product = i * j;
			_putchar(',');
			_putchar(' ');
			if (product >= 10)
			{
				_putchar(product / 10 + 48);
				_putchar(product % 10 + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(produt + 48);
			}
		}
		_putchar('\n');
	}
}
