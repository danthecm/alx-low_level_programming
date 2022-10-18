#include "main.h"
/**
 * print_last_digit - print the last digit
 * @n : integer
 * Return: zero or one
 */
int print_last_digit(int n)
{
	int result = n % 10;

	_putchar(result);
	return (n);
}
