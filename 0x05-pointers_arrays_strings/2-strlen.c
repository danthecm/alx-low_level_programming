#include "main.h"
/**
 * _strlen - reset a pointer to 98
 * @s: a pointer
 * Return: void
 */

int _strlen(char *s)
{
	int length = 0;

while (s[length] != '\0')
{
	length++;
}
return (length);
}
