#include "lists.h"

/**
 *add_node - adds a new node at the beginning of a list_t list.
 *@head: pointer to the head.
 *@str:input string
 *Return: returns the address to the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	char *cpy;
	int length;
	list_t *elem;

	elem = malloc(sizeof(list_t));
	if (elem == NULL)
	{
	return (NULL);
	}
	cpy = strdup(str);
	if (cpy == NULL)
	{
	free(elem);
	return (NULL);
	}
	for (length = 0; str[length];)
	{
	length++;
	}
	elem->str = cpy;
	elem->len = length;
	elem->next = *head;

	*head = elem;

	return (elem);

}
