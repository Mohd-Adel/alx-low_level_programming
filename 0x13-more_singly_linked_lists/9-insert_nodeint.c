#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: desired list.
 * @idx: index of new node.
 * @n:node value.
 * Return: new node address.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *iterator;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	if (!head)
		return (NULL);
	iterator = *head;
	for (i = 0; i < idx && iterator; i++)
	{
		if ((idx - i) > 1)
		{
			iterator = iterator->next;
		}
	}
	if (iterator)
	{
		new->next = iterator->next;
		new->n = n;
		iterator->next = new;
		return (new);
	}
	else
	{
		return (NULL);
	}
}
