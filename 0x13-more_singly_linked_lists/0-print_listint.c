#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: input list.
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes;
	const listint_t *current = h;

	nodes = 0;
	while (current)
	{
		printf("%d\n", current->n);
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
