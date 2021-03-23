#include "lists.h"

/**
 * free_listint - Function to free a listint_t list
 * @head: start of list to free
 */

void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_listint(head->next);

		free(head);
	}
}
