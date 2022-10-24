#include "main.h"
/**
* swap_int - reset a pointer to 98
* @a: a pointer
* @b: b pointer
* Return: void
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	int *temp_address = &temp;
	*temp_address = *a;
	*a = *b;
	*b = *temp_address;

}
