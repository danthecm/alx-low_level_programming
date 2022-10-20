#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 - 9 except 2 and 4
 * Return: int
 */

void print_most_numbers(void)
{
	char n = 0;

	for (; n <= 9; n++)
	{
		if (n != 2 && n != 4)
		{
			_putchar('0' + n);
		}
	}
	_putchar('\n');

}
