#include "lists.h"

/**
 * insert_nodeint_at_index - main function
 * @head: The address of pointer to first node.
 * @idx: The index to insert new node.
 * @n: The integrer value of new node.
 *
 * Description: This function inserts a new node at a given position.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *tmp;
	UINT token = 0;

	newnode = malloc(sizeof(listint_t));
	if (!newnode || !head)
		return (NULL);

	newnode->next = NULL;
	newnode->n = n;

	if (!idx)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	tmp = *head;
	while (tmp)
	{
		if (token == (idx - 1))
		{
			newnode->next = tmp->next;
			tmp->next = newnode;
			return (newnode);
		}
		token++;
		tmp = tmp->next;
	}
	free(newnode);
	return (NULL);
}
