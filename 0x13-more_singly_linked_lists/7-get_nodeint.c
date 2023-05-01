#include "lists.h"
/**
 * get_nodeint_at_index - Afunction to return the nth
 * node of a listint_t linked list
 *
 * @head: Pointer to the head of the linked list node to
 *
 * @index: Index node to return, biggining from 0
 *
 * Return: Pointer to the nth node of the linked list,
 * or NULL if it doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int t;
	listint_t *curr;

	curr = head;
	for (t = 0; t < index && curr != NULL; t++)
	{
		curr = curr->next;
	}

	if (t == index && curr != NULL)
	{
		return (curr);
	}
	else
	{
		return (NULL);
	}
}
