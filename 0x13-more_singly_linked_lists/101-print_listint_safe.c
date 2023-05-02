#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - afunction that  prints a linked list
 * @head: pointer to head of linked list
 *
 * Return: number of nodes to be rturned in the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *t = head, *p = NULL;
	size_t count = 0;

	while (t != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)t, t->n);

		if (t < t->next && p < t)
			break;

		p = t;
		t = t->next;
	}

	if (t != NULL)
		printf("-> [%p] %d\n", (void *)t, t->n);

	return (count);
}
