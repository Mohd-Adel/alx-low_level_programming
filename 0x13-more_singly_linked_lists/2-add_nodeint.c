#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: list head address.
 * @n: n value.
 * Return: adress of new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	const listint_t *new;

	if (head)
	{
		new->next = &head;
		new->n = n;
		return (&new);
	}
	return (NULL);
}
