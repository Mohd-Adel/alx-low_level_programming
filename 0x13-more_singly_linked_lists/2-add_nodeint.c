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
	listint_t *item;

	item = malloc(sizeof(listint_t));
	if (!*head)
	{
		return (NULL);
	}
	item->next = *head;
	item->n = n;
	return (item);
}
