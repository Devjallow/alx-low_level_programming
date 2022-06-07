#include <stdio.h>

/**
 * main - print single digit number in the format
 *
 * Description: seperated by commas
 *
 * Return: return 0
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	if (i != 57)
	
	{
		putchar(',');
		putchar(' ');
	}
	

	return (0);
}
