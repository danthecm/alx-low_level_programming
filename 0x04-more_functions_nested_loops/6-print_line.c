#include "main.h"

/**
 * print_line - print underscores n number of times
 * @n : number of underscores to be printed
 * Return: nothing
 */

void print_line(int n)
{

	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');

}
