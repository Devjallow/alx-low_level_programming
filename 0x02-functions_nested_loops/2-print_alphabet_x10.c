#include "main.h"

/**
 * main - printsthe aphae alphabets 10 times
 *
 * Return: return 0
 */

void print_alphabe_x10(void)
{
int b = 0;
while (b < 10)
{
char a = 'a';
while (a <= 'z')
{
_putchar(a);
a++;

}
_putchar('\n');
b++;
}
