#include "lists.h"
/**
 * reverse_listint - a listint_t linked list reversed
 * @head: pointer to a point to the first element of listint_t.
 *
 * Return: a pointer to the first node of the list element reversed
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
