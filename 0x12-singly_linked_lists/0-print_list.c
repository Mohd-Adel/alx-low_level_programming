#include "lists.h"

/**
 *print_list - prints all the elements of a list_t list.
 *@h: input list.
 *Return: Number of nodes.
 */

size_t print_list(const list_t *h)
{
	int i;
	size_t j = 0;

	while (h->next != NULL)
	{
		printf("[%d] %s \n", h->len, h->str ? h->str : "(nil)");
		j++;
	}
	return (j);
}
