#include  <stdio.h>
#include "main.h"

/**
 * main - Print all the arguments it recieve
 * @argc: prints number of argument
 * @argv: prints the arguments
 * Return: Always return 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
