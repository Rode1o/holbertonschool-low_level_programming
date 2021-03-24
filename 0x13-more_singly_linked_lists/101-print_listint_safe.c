#include "lists.h"

/**
 * print_listint_safe - function to print a linked list
 * @head: head to print out
 * Return: number of nodes in list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *mark_head = NULL;

	if (head == NULL)
		exit(98);

	mark_head = head;

	while (mark_head)
	{
		if (mark_head == head->next->next && count > 2)
			break;

		printf("[%p] %d\n", (void *)mark_head, mark_head->n);
		mark_head = mark_head->next;
		count++;
	}
	return (count);
}
