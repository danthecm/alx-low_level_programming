#include "main.h"
/**
 * reverse_array - reverses the elements in an array
 * @a: array.
 * @n: number of elements of the array.
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int k;

	while (i < n--)
	{
		k = a[i];
		a[i++] = a[n];
		a[n] = k;
	}
}
