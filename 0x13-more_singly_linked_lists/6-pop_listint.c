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

	i = 0;
	if (head)
	{
		if ((*head)->n)
		{
			i = (*head)->n;
		}
		free(*head);
	}
	return (i);
}
