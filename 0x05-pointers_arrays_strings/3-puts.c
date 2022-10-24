#include "main.h"
/**
 * _puts - prints a string out
 * @str: str placeholder
 * Return: void
*/
void _puts(char *str)
{
	int length = 0;

while (str[length] != '\0')
{
	_putchar(str[length]);
	length++;
}
	_putchar('\n');

}
