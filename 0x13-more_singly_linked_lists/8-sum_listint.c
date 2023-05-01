#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_listint -  returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: input list.
 * Return: sum of list.
 */

int sum_listint(listint_t *head)
{
	int i;

	i = 0;
	while (head)
	{
		i += head->n;
		head = head->next;
	}

	return (i);
}
