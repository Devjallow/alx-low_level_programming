#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string poited to by scr
 * including the termination null byte, to the
 * buffer
 * @dest: destination.
 * @src: source
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}


