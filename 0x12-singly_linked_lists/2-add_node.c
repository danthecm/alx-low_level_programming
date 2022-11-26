#include "lists.h"

/**
 * add_node - prints all the members of a list
 * @head: the start of the list
 * @str: the string to add
 *
 * Return: the number of members in the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = temp;

	*head = new;

	return (new);
}
