#include "main.h"
/**
 * print_times_table - print n time table
 * @n : number to multiply
 * Return: nothing
 */
void print_times_table(int n)
{
	int multipler = 0;

	if (n > 0 && n < 15)
	{
		for (; multipler < n; multipler++)
		{
			int result = multipler * n;
			_putchar(result);
			_putchar(',');
		}
	}
}
