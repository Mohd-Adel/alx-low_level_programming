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
	if (*head && head)
	{
		iterator = *head;
		if (idx != 0)
		{
		for (i = 0; i + 1 < idx; i++)
		{
			if (iterator->next)
			{
				iterator = iterator->next;
			}
			else
			{
				return (NULL);
			}
		}
		}
		else
		{
			new->next = iterator;
			new->n = n;
			return (new);
		}
		if (iterator->next)
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
	return (NULL);
}
