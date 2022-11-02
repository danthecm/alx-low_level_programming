#include "main.h"

/**
 * factorial - function taht returns the factorial of a given number
 * @n: integer input
 * Return: n factorial
 */

int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
