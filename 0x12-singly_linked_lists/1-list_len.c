#include "lists.h"

/**
 * list_len - counts the elements of a linked list
 * @h: the start of the list
 *
 * Return: the number of members in the list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
