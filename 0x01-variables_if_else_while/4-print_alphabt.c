#include <stdio.h>

/**
 * main - prints out the alphabet in lowecase except for 'qe'
 *
 * Description: prints the alphabet except q and e
 *
 * Return: return 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)

	if (c != 'e' && c != 'q')
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}

