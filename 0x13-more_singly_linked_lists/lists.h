#ifndef LISTS_H_

#define LISTS_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */

typedef struct listint_s

{

	int n;

	struct listint_s *next;

} listint_t;

/**
 * struct listptr_s - singly linked list
 * 
 * @p: pointers of nodes
 * @next: points to the next node
 *
 * Description: singly linked list of pointers
 */

typedef struct listptr_s

{

	void *p;

	struct listptr_s *next;

} listptr_t;



int _putchar(char);
int sum_listint(listint_t *);
int pop_listint(listint_t **);
int delete_nodeint_at_index(listint_t **, unsigned int);
size_t listint_len(const listint_t *);
size_t print_listint(const listint_t *);
size_t free_listint_safe(listint_t **);
size_t print_listint_safe(const listint_t *);
listint_t *reverse_listint(listint_t **);
listint_t *find_listint_loop(listint_t *);
listint_t *add_nodeint(listint_t **, const int);
listint_t *add_nodeint_end(listint_t **, const int);
listint_t *get_nodeint_at_index(listint_t *, unsigned int);
listint_t *insert_nodeint_at_index(listint_t **, unsigned int, int);
void free_listint(listint_t *);
void free_listint2(listint_t **);
#endif
