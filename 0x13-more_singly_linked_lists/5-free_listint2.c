#include "lists.h"

/**
 * free_listint2 - Function to frees a listint_t list
 * @head: Pointer to a point to the head node of the list
 *
 * Description: listint_t linked list and sets its
 *              head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}

	*head = NULL;
}
