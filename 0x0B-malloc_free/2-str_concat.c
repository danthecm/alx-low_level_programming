#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the array of the concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *strCat, *str1, *str2;

	str1 = s1;
	str2 = s2;

	if (s1 == NULL)
		s1 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	s1 = str1;
	if (s2 == NULL)
		s2 = "";
	for (j = 0; s2[j] != '\0'; j++)
		;
	s2 = str2;
	strCat = malloc(sizeof(char) * (i + j + 1));
	str1 = strCat;

	if (strCat == NULL)
		return (NULL);
	for (k = 0; k < (i + j); k++)
	{
		if (k < i)
		{
			strCat[k] = *s1;
			s1++;
		}
		else
		{
			strCat[k] = *s2;
			s2++;
		}
	}
	strCat[k] = '\0';
	return (str1);
}
