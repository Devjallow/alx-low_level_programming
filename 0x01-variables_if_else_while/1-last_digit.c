#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - check for conditions
 *
 * Description: return the result for the condition
 *
 * Return: return the integer value 0
 *
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	/* your code goes there */
	printf("Last digit of %d is %d and is ", n, last_digit);
	if (last_digit > 5)
	{
		printf("grater than5\n");
	}
	else if (last_digit == 0)
	{
		printf("0\n");
	}
	else if ("last_digit < 6 && last_digit != 0")
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}
