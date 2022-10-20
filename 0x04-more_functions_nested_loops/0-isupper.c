#include "main.h"

/**
 * main - check for upper case
 * Return: zero or one
*/

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	return (0);
}
