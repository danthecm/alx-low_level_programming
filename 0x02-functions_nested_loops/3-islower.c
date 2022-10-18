#include "main.h"
/**
 *  _islower - return 0 or 1 if c is lower case
 *  @c: int c
 *  Return: int
 */
int _islower(int c)
{
	if (c < 97 || c > 122)
	{
		return (0);
	}
	return (1);
}
