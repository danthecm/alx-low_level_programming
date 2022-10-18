#include "main.h"
/**
 * print_alphabet - print the alphabet in lower case
 *
 * Return: void
 */
void print_alphabet(void)
{
	char a = 'a';

	for (int i = 0; i <= 10; i++)
	{
		for (; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
