#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Afunction to add a new node at
 * the end of a listint_t list.
 * @head: A pointer to point to the head node of the list.
 * @n: The integer to store in the new node point on
 *
 * Return: The address of the new element, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node, *tmp;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;

	if (*head == NULL)
		*head = n_node;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = n_node;
	}

	return (n_node);
}
