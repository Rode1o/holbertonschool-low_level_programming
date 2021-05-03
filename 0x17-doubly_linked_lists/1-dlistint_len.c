#include "lists.h"
/**
 * dlistint_len - Function that returns the number of elements
 * @h: list as an argument
 * Return: number of nodes of type size_t
**/
size_t dlistint_len(const dlistint_t *h)
{
size_t i = 0;

while (h != NULL)
{
i++;
h = h->next;
}
return (i);
}
