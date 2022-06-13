#include "main.h"

/**
 * _puts - put string
 * @str: first parameter
 *
 * Description: prints a string
 * Return: Always (0).
 */

void _puts(char *str)
{

	while (str[i] != '\0')
	{
		_puts(*str);
		str++;
	}
	_puts('\n');
}
