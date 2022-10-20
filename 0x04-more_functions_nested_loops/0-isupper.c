#include "main.h"
#include <stdio.h>

/**
 * main - check for upper case
 * Return: zero or one
 */

int _isupper(int c)
{
	if (c >= 'A' && c < 'Z')
	{
		return (1);
	}
	return (0);
}
