#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - frees a listint_t list.
 * @head: input head.
 * Return: free list.
 */

void free_listint2(listint_t **head)
{
	listint_t *currentitem;

	while((currentitem = *head))
	{
		currentitem = (*head)->next;
		free(*head);
		if (currentitem)
		{
		*head = currentitem;
		}
		else
		{
			free(*head);
			*head = NULL;
		}
	}
}
