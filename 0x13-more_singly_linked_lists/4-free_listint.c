#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Function to frees a listint_t list.
 * @head: Pointer to ponmit to the head node of the list.
 *
 * Return: void on success
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
