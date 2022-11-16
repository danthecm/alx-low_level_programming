#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name : placeholder for name
 * @f : pointer for printing the function
 * Return: no return
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
