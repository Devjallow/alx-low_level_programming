#include <stdio.h>

/**
 * main - prints fuzz buzz
 *
 * Description: if number is divisible by 3,5 or 15 prints something
 *Return: Alwyas (0).
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 15 == 0)
		{
			printf("FuzzBuzz\t");
		}
		else if ((i % 3) == 0)
		{
			printf("Fuzz\t");
		}
		else if ((i % 5) == 0)
			prinf("Buzz\t");
		else
		{
			printf("%d\t", i);
		}
		i++;
	}
	return (0);
}
