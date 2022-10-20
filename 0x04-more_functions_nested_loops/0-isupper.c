#include "main.h"

/**
 * main - check for upper case
 * Return: zero or one
*/

int _isupper(int c)
{
	if (c > 65 && c < 90)
	{
		return (1);
	}
	return (0);
}
