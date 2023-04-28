#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list to be freed
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *mvb;

	while (head != NULL)
	{
		mvb = head;
		head = head->next;
		free(mvb->str);
		free(mvb);
	}
}
