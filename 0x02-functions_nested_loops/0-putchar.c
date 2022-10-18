#include "_putchar.c"

/**
 * main - print _putchar
 *
 * Return: zero
 */

int main(void) {
	char string[] = "_putchar";

	int count = 0;

	for (; count < 8; count++)
	{
		_putchar(string[count]);
	}
	_putchar('\n');
	return 0;
}
