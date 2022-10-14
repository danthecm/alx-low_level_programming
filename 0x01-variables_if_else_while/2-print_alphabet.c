#include <stdio.h>
#include <stdlib.h>
/**
 * main - put out
 *
 * Return: zero
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++ ) {
		putchar(x);
	}
	putchar('\n');
	return (0);
}
