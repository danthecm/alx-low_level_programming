#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet in lower case 10x
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;

	for (; i <= 10; i++)
	{
		char a = 'a';

		for (; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
