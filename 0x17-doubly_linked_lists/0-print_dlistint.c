#include "lists.h"
/**
 * print_dlistint - Function that prints all the elements
 * of a list
 * @h: list as an argument
 * Return: number of nodes of type size_t
**/
size_t print_dlistint(const dlistint_t *h)
{
size_t i = 0;

while (h != NULL)
{
printf("%d\n", h->n);
i++;
h = h->next;
}
return (i);
}
