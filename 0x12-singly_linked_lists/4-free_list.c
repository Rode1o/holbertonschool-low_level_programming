#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: Pointed to head of a list
 *
 * Return: Void
 */
void free_list(list_t *head)
{
	list_t *new = head;

	list_t *next = NULL;

	for (; new != NULL; new = next)
	{
		next = new->next;
		free(new->str);
		free(new);
	}
}
