#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 9 ten times
 * Return: nothing
 */

void more_numbers(void)
{
	char n, c;
	int i = 0;


	for (; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			c = n;
			if (n > 9)
			{
				_putchar('1');
				c = n % 10;
			}

			_putchar('0' + c);
		}

		_putchar('\n');

	}

}
