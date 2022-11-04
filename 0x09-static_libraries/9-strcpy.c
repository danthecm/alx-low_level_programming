#include "main.h"
#include <stdio.h>

/**
 *_strcpy - a function that copies the string pointer to by src
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 * Return: pointer to dest
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
