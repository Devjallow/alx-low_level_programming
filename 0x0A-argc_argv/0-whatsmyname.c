#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program.
 * @argc: print the number of argument
 * @argv: print the array of characters
 *  return: Always 0.
 */

int main(int argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
