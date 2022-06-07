#include <stdio.h>

/**
 * main - prints all single digits
 *
 * Description: print  all single digits
 *
 * Return: return 0
 */

int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
