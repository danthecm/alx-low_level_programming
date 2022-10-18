#include "main.h"
/**
 * print_alphabet - print the alphabet in lower case
 *
 * Return: void
 */
void print_alphabet(void)
{
	char a = 'a';

	for (; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
