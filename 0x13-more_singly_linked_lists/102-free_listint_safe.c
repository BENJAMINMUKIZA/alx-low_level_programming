#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Afunction to  frees a listint_t list
 * @h: pointer to pointer to head of the list elements
 *
 * Return: the size of the list that was freesed by it
 */
size_t free_listint_safe(listint_t **h)
{
	size_t s = 0;
	listint_t *tmp;

	while (*h != NULL)
	{
		if (*h <= (*h)->next)
		{
			tmp = *h;
			*h = NULL;
			free(tmp);
			s++;
			break;
		}
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
		s++;
	}
	return (s);
}
