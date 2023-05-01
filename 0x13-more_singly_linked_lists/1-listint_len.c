#include "lists.h"
#include <stdio.h>

/**
 * listint_len - the number of elements in a linked listint_t list
 * to return
 * @h: a pointer to the head of the listint_t list returned
 *
 * Return: a number of elements in the list to be returned
 */
size_t listint_len(const listint_t *h)
{
	size_t l = 0;

	while (h != NULL)
	{
		l++;
		h = h->next;
	}

	return (l);
}
