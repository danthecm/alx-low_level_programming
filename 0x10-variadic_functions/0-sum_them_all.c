#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_them_all - a functions that returns the sum an input arguments
 * @n: number of arguments
 * Return: sum of the arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int i;
	int sum = 0;

	va_start(add, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(add, int);
	}
	va_end(add);
	return (sum);
}
