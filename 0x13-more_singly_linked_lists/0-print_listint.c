#include "lists.h"
#include <stdio.h>
#include <stdlib>

/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: input list.
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h->next)
	{
		printf("%d\n", n);
		nodes++;
		h = h->next
	}
	return (nodes);
}
