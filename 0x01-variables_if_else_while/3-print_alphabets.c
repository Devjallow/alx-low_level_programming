#include <stdio.h>

/**
 * main - alphabet in lowercase, followed by a new line
 *
 * DEscription: prints alphabets in lowercase
 *
 * Return: return 0
 */
int main(void)
{
	char a = 'a';
	char b = 'b';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (a <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');

	return (0);

}

