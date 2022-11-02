#include "main.h"

/**
 * _pow_recursion - function that returns the value of x to the power y
 * @x: integer input
 * @y: integer input
 * Return: x to the power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);

	return (x *= _pow_recursion(x, y - 1));
}
