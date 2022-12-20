#include "main.h"

/**
 * _strlen_recursion - Prints the length of a string
 * @s: Thelenght of string to be counted
 * Return: Always success.
 */

int _strlen_recursion(char *s)
{
	static int i;

	i = 0;

	if (*s != '\0')
	{
		i++;
		_strlen_recursion(++s);
	}
	else
	{
		return i;
	}
}
