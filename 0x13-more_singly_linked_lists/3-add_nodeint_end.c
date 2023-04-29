#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: list head.
 * @n: item value.
 * Return: address of new elemnt.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t item, current;

	current = *head;
	while (current->next)
	{
		current = current->next;
	}
	item = current->next;
	item->n = n;
}
