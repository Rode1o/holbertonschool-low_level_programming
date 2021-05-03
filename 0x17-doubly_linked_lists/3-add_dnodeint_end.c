#include "lists.h"
/**
  * add_dnodeint_end - adds a new node at the end of a list
  * @head: first element of list
  * @n: data to store in the new node
  * Return: the address of the new element
  * or NULL if it failed
**/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *last_node = (dlistint_t *) malloc(sizeof(dlistint_t)), *aux;

if (last_node == NULL)
return (NULL);

last_node->n = n;
last_node->next = NULL;

if (*head == NULL)
{
last_node->prev = NULL;
*head = last_node;
return (*head);
}
aux = *head;
while (aux->next != NULL)
{
aux = aux->next;
}
aux->next = last_node;
last_node->prev = aux;
return (*head);
}
