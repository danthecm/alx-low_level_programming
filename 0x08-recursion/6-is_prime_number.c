#include "main.h"
int divisible(int num, int div);

/**
 * is_prime_number - Afunction that checks if a number is prime.
 * @n: an input integer
 * Return: 1 if n is prime or  0 in otherwise
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n % 2 == 0)
		return (0);
	return (divisible(n, div));
}

/**
 * divisible - check if num is divisible
 * @num: the number to be checked
 * @div: the result of division
 * Return: 1 if num is divisible or 0 if numis not divisible
 */

int divisible(int num, int div)
{
	if (div == num / 2)
		return (1);

	return (divisible(num, div + 1));
}
