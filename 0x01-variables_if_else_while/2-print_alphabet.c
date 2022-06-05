#include <stdio.h>

/**
 * main - alphabet in lowercase, followed by a new line
 *
 *Description: print out alphabet from a to z
 *
 * Return: return 0
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
