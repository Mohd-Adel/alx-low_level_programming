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

	if (head)
	{
		i = 0;
		while (i < index)
		{
			if (head->next)
			{
				head = head->next;
			}
			else
			{
				return (NULL);
			}
			i++;
		}
		return (head);
	}
	return (NULL);
}
