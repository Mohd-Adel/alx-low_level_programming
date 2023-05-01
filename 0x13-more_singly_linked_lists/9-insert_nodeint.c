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
	i = 0;
	if (*head && head)
	{
		iterator = *head;
		while (iterator && i + 1 < idx)
		{
			if (iterator->next)
			{
			iterator = iterator->next;
			i++;
			}
			else
			{
				return (NULL);
			}
		}
		new->next = iterator->next;
		new->n = n;
		iterator->next = new;
		return (new);
	}
	return (NULL);
}
