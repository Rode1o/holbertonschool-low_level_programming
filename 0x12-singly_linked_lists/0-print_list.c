#include "lists.h"

/**
 * print_list - print all the elements of a list
 * @h: list to print the elements of
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t token = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		token++;
		h = h->next;
	}

	return (token);
}

