#include "main.h"
#include <stdio.h>

/**
 * _isupper - check for upper case
 * @c: int c
 * Return: zero or one
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
