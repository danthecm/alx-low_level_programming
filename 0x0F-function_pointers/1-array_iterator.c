#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter.
 * @array : placeholder for array
 * @size : placeholder for size of array
 * @action : placeholder of a pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
