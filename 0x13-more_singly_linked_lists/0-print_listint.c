#include "lists.h"
/**
 * print_listint - main function
 * @h: Pointer to the string.
 *
 * Description: This function prints all the elements of a listint_t list.
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t token = 0;

	while(h != NULL)
	{
		printf("%d\n", h->n);
		token++;
		h = h->next;
	}
	return (token);
}
