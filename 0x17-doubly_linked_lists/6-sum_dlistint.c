#include "lists.h"
/**
  * sum_dlistint - sum all the data (n) of a list
  * @head: list coming
  * Return: sum of all the data (n) of a list
**/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
