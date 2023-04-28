#include "lists.h"

/**
 *add_node_end - Adds a new node at the end of a list_t.
 *@head: pointer to head
 *@str: string input
 *Return: NULL in case of failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *cpy;
	int length;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	return (NULL);

	cpy = strdup(str);
	if (str == NULL)
	{
	free(new);
	return (NULL);
	}

	for (length = 0; str[length];)
	length++;

	new->str = cpy;
	new->len = length;
	new->next = NULL;

	if (*head == NULL)
	*head = new;
	else
	{
	last = *head;
	while (last->next != NULL)
	last = last->next;
	last->next = new;
	}
	return (*head);
}
