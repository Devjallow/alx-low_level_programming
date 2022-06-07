#include <stdio.h>

/**
 * main - printns all the numbers of base 16
 *
 * Description: the numbers are all digits
 *
 * Return: return 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
