#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - frees a listint_t list.
 * @head: head of input list.
 *
 * Return: free space.
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	current = malloc(sizeof(listint_t));
	if (!current)
	{
		free(current);
	}
	if (head && !head->next)
	{
		free(head);
	}
	else if (head && head->next)
	{
		while (head->next)
		{
			current = head->next;
			free(head);
		}
	}
	free(current);
}
