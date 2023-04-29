#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked listint_t list.
 * @h: input list.
 * Return: number of elements.
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes;
	const listint_t *current = h;

	nodes = 0;
	while (current)
	{
		nodes++;
		if (current->next)
		{
			current = current->next;
		}
		else
		{
			break;
		}
	}
	return (nodes);
}

