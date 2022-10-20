#include "main.h"

/**
 * print_diagonal - prints backslaches diagonally
 * * @n : number of \ to be printed
 * Return: nothing
 */

void print_diagonal(int n)
{

	int i = 0, k;

	for (; i < n && n > 0; i++)
	{
		for (k = 0; k < i; k++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}
	if (i == 0)
		_putchar('\n');

}
