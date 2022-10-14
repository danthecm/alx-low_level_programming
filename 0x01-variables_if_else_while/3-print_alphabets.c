#include <stdlib.h>
#include <stdio.h>
/**
 * main - put out
 *
 * Return zero
 */
int main(void)
{
	int x;

	int y;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
