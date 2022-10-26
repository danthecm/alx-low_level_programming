#include "main.h"

/**
 * string_toupper - converts lower case strings to upper case
 * @s: input string
 * Return: pointer to the converted string
 */

char *string_toupper(char *s)
{
	char *up = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (up);
}
