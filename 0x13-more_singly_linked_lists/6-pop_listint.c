#include "lists.h"
/**
 * pop_listint - the head node of a listint_t linked list to be deleted
 * @head: A pointer to a point to the head node of the linked list.
 *
 * Return: Data (n) of the head node deleted, or 0 if the linked
 * list is empty.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (*head == NULL)
	{
		return (0);
	}
	tmp = *head;
	*head = (*head)->next;
	data = tmp->n;
	free(tmp);
	return (data);
}
