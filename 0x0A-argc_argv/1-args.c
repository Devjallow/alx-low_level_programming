#include <stdio.h>
#include "main.h"

/**
 * main - prints index of argument pass on the terminal
 * @argc: prints index of argument.
 * @argv: prints arrays of argument
 * return: always return success -.
 */

int main (int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc; i++)
	{
		printf("%d\n", i);
	}
	return(0);
}
