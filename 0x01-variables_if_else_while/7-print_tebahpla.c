#include <stdio.h>
/**
 * main - put out
 *
 * Return: zero
 */
int main(void)
{
	int x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
