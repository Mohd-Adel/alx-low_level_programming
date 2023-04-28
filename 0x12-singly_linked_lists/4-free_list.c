#include "lists.h"

/**
 *free_list - Frees a list
 *@head: pointer to head
 */

void free_list(list_t *head)
{
	list_t *freed;

	while (head)
	{
	freed = head->next;
	free(head->str);
	free(head);
	head = freed;
	}
}
