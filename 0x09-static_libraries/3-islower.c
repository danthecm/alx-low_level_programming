#include "main.h"

/**
 * _islower - checks for lower case letters
 * @c: an input character
 * Description: function uses _putchar function to print alphabet
 * in lowercase 10 times
 * Return: 0
 */

int _islower(int c)
{
	char letter;
	int check = 0;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == c)
			check = 1;
	}
	return (check);
}
