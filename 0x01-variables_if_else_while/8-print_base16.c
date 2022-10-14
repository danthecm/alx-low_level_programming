#include <stdio.h>
/**
 * main - put out
 *
 * Return: zero
 */
int main(void)
{
	int x;

	int y;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
