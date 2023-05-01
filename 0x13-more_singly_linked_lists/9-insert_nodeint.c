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
	listint_t *new;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	i = 0;
	if (*head && head)
	{
	while (i < idx)
	{
		if ((*head)->next)
		*head = (*head)->next;
		i++;
		}
		else
		{
			return (NULL);
		}
	}
	}
	new->n = n;
	new->next = (*head)->next;
	(*head)->next = new;
	if (!new)
		return (NULL);
	return (new);
}
