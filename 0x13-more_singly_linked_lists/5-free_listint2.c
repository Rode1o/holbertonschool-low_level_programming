#include "lists.h"

/**
 * free_listint2 - free a list and set head to NULL
 * @head: list to free
 */
void free_listint2(listint_t **head)
{
	listint_t *list;

	if (!head)
	{
		return;
	}
	while (*head)
	{
		list = *head;
		*head = list->next;
		free(list);
	}
}
