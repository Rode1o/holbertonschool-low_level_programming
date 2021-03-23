#include "lists.h"

/**
 * get_nodeint_at_index - main function
 * @head: Pointer to the head node.
 * @index: The index of the node.
 *
 * Description: This function the nth node of a linked list.
 *
 * Return: The nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	UINT token = 0;

	while (head != NULL)
	{
		if (token == index)
			break;

		head = head->next;
		token++;
	}

	if (token < index)
		return (NULL);
	return (head);
}
