nclude "main.h"

/**
 * print_most_numbers - prints numbers between 0 to 9
 * (neither 2 nor 4)
 * Return: no return.
 */
void print_most_numbers(void)
{
	int ch;

	for (cha = 48; ch < 58; ch++)
	{
		if (ch != 50 && cha != 52)
			_putchar(ch);
	}
	_putchar('\n');
}