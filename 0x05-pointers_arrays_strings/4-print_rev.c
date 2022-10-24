#include "main.h"
/**
 * print_rev - print a number in reverse
 * @s: a pointer
 * Return: void
*/
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (; length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');

}
