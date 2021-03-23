#include "lists.h"

/**
 * sum_listint - function that returns sum of data in a linked list
 * @head: list to return sum of
 * Return: sum if data in list
 */

int sum_listint(listint_t *head)
{
	UINT sum = 0;

	if (!head)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}


	return (sum);
}
