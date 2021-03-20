#include "lists.h"

/**
 * add_node_end- main function
 * @head: The pointer address to header node.
 * @str: Pointer to the string of the node.
 *
 * Description: This function adds a new node at the end of a list_t list.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *token = *head;
	UINT i;

	newnode = malloc(sizeof(list_t));
	if (!head || !newnode)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
		;
	newnode->next = NULL;
	newnode->str = strdup(str);
	newnode->len = i;

	if (token == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (token->next)
		{
			token = token->next;
		}
		token->next = newnode;
	}
	return (newnode);
}
