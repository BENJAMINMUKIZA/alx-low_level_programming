#include "lists.h"

/**
 * sum_listint - Calculate the sum of all the integers in a linked list.
 * @head: Pointer to the head node in linked list.
 *
 * Return: The total sum of all the integers
 * in the linked list, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
