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
	listint_t *currentitem, *temp;

	if (head)
	{
	currentitem = *head;
	while(currentitem)
	{
		temp = currentitem;
		currentitem = currentitem->next;
		free(temp);
	}
	*head = NULL;
	}
	else
	{
		return;
	}
}
