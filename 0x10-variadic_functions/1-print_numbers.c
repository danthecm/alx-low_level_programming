#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - function that prints the numbers inputd in an argument
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;
	int numbers;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		numbers = va_arg(num, int);
		printf("%d", numbers);
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(num);
}
