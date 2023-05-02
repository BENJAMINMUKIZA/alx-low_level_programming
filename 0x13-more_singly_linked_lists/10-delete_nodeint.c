#include "lists.h"
/**
 * delete_nodeint_at_index - the node to be deleted at index of a linked list
 * @head: pointer to point on the head of the linked list
 * @index: index of the node to be deleted
 *
 * Return: 1 on success, -1 on fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *prev;
	unsigned int a;

	if (*head == NULL)
		return (-1);

	curr = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(curr);
		return (1);
	}

	for (a = 0; a < index; a++)
	{
		prev = curr;

		if (curr->next != NULL)
			curr = curr->next;
		else
			return (-1);
	}

	prev->next = curr->next;
	free(curr);

	return (1);
}
