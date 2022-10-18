#include "main.h"

/**
 *   _isalpha - return 0 or 1 if c is lower case
 *
 *  @c: int c
 *
 *  Return: int
 */

int  _isalpha(int c)

{

	if (c < 65 || c > 122)

	{

		return (0);

	}

	return (1);

}
