#include "main.h"
/**
 * _puts_recursion - prints a function followed by a new line
 * @s : character
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
