#include "lists.h"
/**
  * free_dlistint - frees a list
  * @head: first element of list
  * Return: void
**/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		free(tmp);
		head = head->next;
	}
}
