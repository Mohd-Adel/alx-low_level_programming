#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: list head.
 * @n: item value.
 * Return: address of new elemnt.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *item, *current;

	item = malloc(sizeof(listint_t));
	current = malloc(sizeof(listint_t));
	if (!current)
	{	
		return (NULL);
	}
	if (!item)
	{
		return (NULL);
	}
	if (!*head)
	{
		free(current);
		item->n = n;
		item->next = NULL;
		return (item);
	}
	else
	{
	current = *head;
	while (current->next)
	{
		item->next = NULL;
		current = current->next;
	}
	current->next = item;
	item->n = n;
	item->next = NULL;
	return (item);
	}
}
