#include <stdio.h>
#include "main.h"

/**
 * main - prints index of argument pass on the terminal
 * @argc: prints index of argument.
 * @argv: prints arrays of argument
 * Return: always return 0.
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++)
			;
			printf("%d\n", i - 1);
	}
	return (0);
}
