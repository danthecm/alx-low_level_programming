#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: head of the list.
 *
 * Return: nothing, void
 */

void free_listp(listptr_t **head)
{
	listptr_t *temp;

	listptr_t *present;

	if (head != NULL)
	{

		present = *head;

		while ((temp = present) != NULL)
		{
			present = present->next;
			free(temp);
		}

		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a listint_t list safely
 * @head: th elist to print
 *
 * Return: no of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = 0;

	listptr_t *hptr, *new, *add;

	hptr = NULL;

	while (head != NULL)
	{
		new = malloc(sizeof(listptr_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;

			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (num_nodes);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		num_nodes++;
	}
	free_listp(&hptr);
	return (num_nodes);
}
