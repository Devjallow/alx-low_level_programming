#include <stdio.h>

/**
 * main - prints a list of numbers
 *
 * description: the numbers are single digits
 *
 * Return: return 0
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
