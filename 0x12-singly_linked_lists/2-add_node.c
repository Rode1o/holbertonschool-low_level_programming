#include "lists.h"
#include <unistd.h>

/**
 * add_node - function to add new node at beginning of list
 * @head: pointer to the first node
 * @str: string content for the first node
 * Return: address of the new element, or NULL upon failure
 */

typedef unsigned int UINT;
list_t *add_node(list_t **head, const char *str)
{
	list_t *head_n = NULL;
	UINT i;

	head_n = malloc(sizeof(list_t));

	if (head_n == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	head_n->str = strdup(str);
	head_n->len = i;
	head_n->next = *head;
	*head = head_n;

	return (*head);
}
