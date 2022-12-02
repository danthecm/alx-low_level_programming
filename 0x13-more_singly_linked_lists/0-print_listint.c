#include "lists.h"
/**
 * print_listint - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */
size_t print_listint(const listint_t *h)

{
	unsigned int node = 0;

	while (h != NULL)

	{

		printf("%d\n", h->n);
		node++;
		h = h->next;

	}

	return (node);

}
