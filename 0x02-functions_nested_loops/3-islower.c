#include "main.c"

/**
 * _islower - check for lowercase letters in the file
 *@c: character to check
 *
 * Return: return 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
