#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 * @head: input head ptr.
 * Return: n value.
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	i = 0;
	if (head && *head)
	{
		temp = *head;
		if ((*head)->n)
		{
			i = (*head)->n;
		}
		if ((*head)->next)
		{
		*head = (*head)->next;
		}
		free(temp);
	}
	return (i);
}
