#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated memory
 * @str: a string input
 * Return: a pointer to the newly allocated space
 */

char *_strdup(char *str)
{
	int i, j;
	char *newString;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	newString = (char *)malloc(sizeof(*str) * (i + 1));

	if (newString == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		newString[j] = str[j];
	return (newString);
}
