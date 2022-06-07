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
	char b = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');

	return (0);

}

