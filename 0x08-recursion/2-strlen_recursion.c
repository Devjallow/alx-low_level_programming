#include "main.h"

/**
 * _strlen_recursion - Prints the length of a string
 * @s: Thelenght of string to be counted
 * retrun: Always success.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1);
		_strlen_recursion(s + 1);
}