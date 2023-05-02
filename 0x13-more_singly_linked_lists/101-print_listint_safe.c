#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - a function that prints a listint_t linked list
 *
 * @head: A pointer to head of linked list to point to
 *
 * Return: return the number of nodes in the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node = head, *prev = NULL;
	size_t c = 0;

	while (node != NULL)
	{
		c++;
		printf("[%p] %d\n", (void *)node, node->n);

		if (node < node->next && prev < node)
			break;

		prev = node;
		node = node->next;
	}

	if (node != NULL)
		printf("-> [%p] %d\n", (void *)node, node->n);

	return (c);
}
