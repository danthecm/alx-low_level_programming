#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet in lower case 10x
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char a = 'a';

	int i = 0;

	for (; i <= 10; i++)
	{
		for (; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
