#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints the elements of a listint_t list
 * @h: A pointer to the head of listint_t list
 *
 * Return: The number of nodes in the list to use
 */
size_t print_listint(const listint_t *h)
{
	size_t node_t = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_t++;
		h = h->next;
	}

	return (node_t);
}
