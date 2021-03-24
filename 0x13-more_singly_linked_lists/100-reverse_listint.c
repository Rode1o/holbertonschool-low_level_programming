#include "lists.h"

/**
 * reverse_listint - function to reverse linked list
 * @head: list to reverse
 * Return: pointer to first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL, *next = NULL;
	
	if (head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;
	return (*head);
}
