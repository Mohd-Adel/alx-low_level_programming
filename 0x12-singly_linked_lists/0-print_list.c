#include "lists.h"

/**
 *_strlen - returns the input length.
 *@c: input.
 *Return: length of input
 */
int _strlen(char *c)
{
	int i = 0;

	if (!c)
	{
	return (0);
	}
	while (*c++)
	{
	i++;
	}
	return (i);
}

/**
 *print_list - prints all the elements of a list_t list.
 *@h: input list.
 *Return: Number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		j++;
	}
	return (j);
}
