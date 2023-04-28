#include "lists.h"

/**
 *print_list - prints all the elements of a list_t list.
 *@h: input list.
 *Return: Number of nodes.
 */

size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	size_t j = 0;

	while (ptr != NULL)
	{
		printf("[%d] %s\n", ptr->str ? ptr->len : 0, ptr->str ? ptr->str : "(nil)");
		ptr = ptr->next;
		j++;
	}
	return (j);
}
