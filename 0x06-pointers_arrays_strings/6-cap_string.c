#include "main.h"

/**
 * cap_string - returns the first letter of a string in upper case
 * @s: input string
 * Return: pointer to s
 */

char *cap_string(char *s)
{
	char *up = s;
	int i = 0;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*s >= 'a' && *s <= 'z')
		*s -= 32;
	s++;

	while (*s != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*s == sep_words[i])
			{
				if (*(s + 1) >= 'a' && *(s + 1) <= 'z')
					*(s + 1) -= 32;
				break;
			}
		}
		s++;
	}
	return (up);
}
