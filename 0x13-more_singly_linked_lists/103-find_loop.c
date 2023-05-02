#include "lists.h"

/**
 * find_listint_loop - Afunction to Find the loop in a linked list
 *
 * @head: Pointer to the head node of the list element
 *
 * Return: The address of the node where the loop begins,
 * or NULL if there is no loop or eror
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *low, *quick;

	if (!head || !head->next)
		return (NULL);

	low = head;
	quick = head;

	while (quick && quick->next)
	{
		low = low->next;
		quick = quick->next->next;

		if (low == quick)
		{
			low = head;

			while (low != quick)
			{
				low = low->next;
				quick = quick->next;
			}

			return (low);
		}
	}

	return (NULL);
}
