#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Prints the sum of two argument
 * @argc: prints index of argument.
 * @argv: prints the argument
 * Return: Alway success.
 */

int main(int argc, char *argv[])
{
	int sum;
	int arg1;
	int arg2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		arg1 = atoi(argv[1]);
		arg2 = atoi(argv[2]);
		sum = arg1 * arg2;
		printf("%d\n", sum);
	}
	return (0);
}
