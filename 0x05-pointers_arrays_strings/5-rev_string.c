#include "main.h"
/**
 * rev_string - a function that reverse a string
 * @s: an input string
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0, k = 0;
	char let;

	while (s[k] != '\0')
		k++;

	while (i < k--)
	{
		let = s[i];
		s[i++] = s[k];
		s[k] = let;
	}
}
