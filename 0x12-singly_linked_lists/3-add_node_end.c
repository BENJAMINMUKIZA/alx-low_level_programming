#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head of list
 * @str: string to be stored in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *latest_node, *old_node;

	if (head == NULL || str == NULL)
		return (NULL);
	latest_node = malloc(sizeof(list_t));
	if (latest_node == NULL)
		return (NULL);
	latest_node->str = strdup(str);
	if (latest_node->str == NULL)
	{
		free(latest_node);
		return (NULL);
	}
	latest_node->len = strlen(str);
	latest_node->next = NULL;

	if (*head == NULL)
	{
		*head = latest_node;
		return (latest_node);
	}
	old_node = *head;
	while (old_node->next != NULL)
		old_node = old_node->next;

	old_node->next = latest_node;
	return (latest_node);
}
