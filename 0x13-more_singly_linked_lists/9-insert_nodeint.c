#include "lists.h"

/**
 * insert_nodeint_at_index - Inter a new node at a given space
 * @head: Pointer to a pointer to the head of agiven state or position
 * @idx: Index of the list or data where the new node will be added to
 * @n: Value to store or keep in the new node
 *
 * Return: The address of the new node, or NULL if it fails to check
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *n_node;
	listint_t *curr_node = *head;
	unsigned int a;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;

	if (idx == 0)
	{
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}

	for (a = 0; a < idx - 1 && curr_node != NULL; a++)
		curr_node = curr_node->next;

	if (curr_node == NULL)
	{
		free(n_node);
		return (NULL);
	}

	n_node->next = curr_node->next;
	curr_node->next = n_node;

	return (n_node);
}
