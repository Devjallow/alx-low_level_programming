#inclue "main.c"

/**
 * _isupper - prints 1 0r 0
 * @c: input type variable
 * Return: Always return 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
