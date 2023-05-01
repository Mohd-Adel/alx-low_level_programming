#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: input list head.
 * @index: desiser nth.
 * Return: nth node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *item;

	if (head)
	{
	for (i = 0; i <= index; i++)
	{
		item = head;
		if (head->next)
		{
		head = head->next;
		}
		else
		{
			item = NULL;
			break;
		}
	}
	}

	return (item);
}
