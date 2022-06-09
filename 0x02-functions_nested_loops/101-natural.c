#include <stdio.h>

/**
 * main - sus multiples of 3 and 5
 *
 * Description: mutiples between 0 and 1024
 *
 * Return: Alwyas return 0.
 */

int main(void)
{
	int start_num;
	int end_num;
	int total;

	end_num = 1024;
	total = 0;

	for (start_num = 0; start_num < end_num; start_num++)
	{
		if ((start_num % 3 == 0) || (start_num % 5 == 0))
		{
		total = tolat + start_num;
		}
		else
		{
			continue;
		}
	}
	printf("%d", total);
	printf("\n");

	return (0);
}
