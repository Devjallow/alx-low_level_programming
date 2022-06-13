#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times
 * Return: no return.
 */
void more_numbers(void)
{
	int n, i;

	for (n = 0; ch < 10; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
			else
			{
				_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
