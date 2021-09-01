#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * === LIBS ===
 */
#include <stdio.h>
#include <stdlib.h>

/**
* struct listint_s - single linked list
* @n: Integer
* @index: Index of the node in the list
* @next: Pointer to the next node
*
* Description: singly linked list node structure for holberton projects
*/
typedef struct listint_s
{
  int n;
  size_t index;
  struct listint_s *next;
}listint_s;

/**
 * === PROTOTYPES ===
 */
int linear_search(int *array, size_t size, int value);


#endif

