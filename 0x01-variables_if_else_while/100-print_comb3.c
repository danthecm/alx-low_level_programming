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
		for (y = '0'; y <= '9'; y++)
		{
			if (x != y)
			{
				putchar(x);
				putchar(y);
				if (x == '8' && y == '9')
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
		if (x == '8' && y == '9')
		{
			break;
		}
	}
	putchar('\n');
	return (0);
}
