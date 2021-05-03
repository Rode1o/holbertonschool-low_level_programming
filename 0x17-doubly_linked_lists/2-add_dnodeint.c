#include "lists.h"
/**
 * add_dnodeint - Function that adds a new node at
 * the beginning of a list
 * @head: list as an argument
 * @n: data to store in the new node
 * Return: the address of the new element
**/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_head = (dlistint_t *) malloc(sizeof(dlistint_t));

if (new_head == NULL)
return (0);

new_head->n = n;
new_head->next = (*head);
new_head->prev = NULL;
if ((*head) != NULL)
(*head)->prev = new_head;

(*head) = new_head;

return (new_head);
}
