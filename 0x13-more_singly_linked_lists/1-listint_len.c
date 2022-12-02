#include "lists.h"

/**
 * listint_len - returns then number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t listint_len(const listint_t *h)

{

	unsigned int length = 0;

	while (h)

	{

		h = h->next;

		length++;

	}

	return (length);

}
