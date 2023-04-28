#include "lists.h"

/**
 *print_list - prints all the elements of a list_t list.
 *@h: input list.
 *Return: Number of nodes.
 */

size_t print_list(const list_t *h)
{
	int i, j;

	while (h->next != NULL)
	{
		_putchar('[');
		_putchar(h->len);
		_putchar(']');
		for (i = 0; i <= h->len; i++)
		{
		_putchar((h->str)[i]);
		}
		j++;
	}
	return (j);
}
