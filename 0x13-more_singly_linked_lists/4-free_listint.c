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
	listint_t *currentitem;

	while (head)
	{
		currentitem = head;
		head = head->next;
		free(currentitem);
	}
}
