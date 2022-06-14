#include "main.h"

/**
 * puts2 - print character
 * @str: input string
 *
 * Description: prints character of a string,
 * Return: no return
 */
void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}

