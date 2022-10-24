#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: An input string
 * Return: void
 */

void puts_half(char *str)
{
	int let = 0, i, k;

	while (str[let] != '\0')
		let++;

	if (let % 2 == 0)
		i = let / 2;
	else
		i = (let + 1) / 2;

	for (k = i; k < let; k++)
		_putchar(str[k]);

	_putchar('\n');
}
