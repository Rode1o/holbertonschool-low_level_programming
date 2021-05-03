#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a
 * linked list
 * @head: first node of the list
 * @index: position of the node to be returned
 * Return: address of the node to be returned
**/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; head; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
