#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

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
	if (!item)
	{
		return (NULL);
	}
	if (!*head)
	{
		item->n = n;
		item->next = NULL;
		return (*head = item);
	}
	else
	{
	current = *head;
	while (current->next)
	{
		current = current->next;
	}

	current->next = item;
	item->n = n;
	item->next = NULL;
	return (item);
	}
}
