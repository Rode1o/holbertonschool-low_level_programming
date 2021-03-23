#include "lists.h"

/**
 * delete_nodeint_at_index - main function
 * @head: The address of pointer to first node.
 * @index: The index to delete the node.
 *
 * Description: This function deletes the node at index index of
 * a listint_t linked list.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *h;

	UINT i = 0;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	tmp = *head;
	while (tmp)
	{
		if ( i == index)
		{
			h->next = tmp->next;
			free(tmp);
			return (1);
		}
		i++;
		h = tmp;
		tmp = tmp->next;
	}
	
	return (-1);
}
