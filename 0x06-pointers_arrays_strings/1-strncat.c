#include "main.h"
/**
 * _strncat - a function that concatenates two strings based on a condition
 * @dest: an input string
 * @src: and input string
 * @n: and input integer
 * Return: a pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int count1  = 0, count2 = 0;

	while (*(dest + count1) != '\0')
	{
		count1++;
	}

	while (count2 < n)
	{
		*(dest + count1) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count1++;
		count2++;
	}
	return (dest);
}
