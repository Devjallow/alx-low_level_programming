#include <stdio.h>
#include <string.h>

/**
 * palindrome - Checks if string is the same as reversed.
 * @s: the string to be printed
 * @n: first lend of string
 * @j: second length of string
 *
 * Return: Always success.
 */

int palindrome(char *s, int n, int j)
{
	if (n == j)
	{
		return (1);
	}
	if (s[n] != s[j])
	{
		return (0);
	}
	if (n < j + 1)
	{
		return (palindrome(s, n + 1, j - 1));
	}
	return (1);
}

/**
 * is_palindrome - Prints 0 if a string is palindrome.
 * @s: string to be printed
 *
 * Return: Always success.
 */

int is_palindrome(char *s)
{
	int i = strlen(s);

	if (i == 0)
	{
		return (1);
	}
	return (palindrome(s, 0, i - 1));
}
